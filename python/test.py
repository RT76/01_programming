import math
import csv

'''rho:即ρ，叶片密度；omega：旋转角速度；sigma：即σ，应力；alpha：即α，夹角；A:角度叶片各截面的截面积；X、Y、Z：叶片各截面重心坐标；I：主惯性矩
eta：即η；xi：即ξ；c：离心应力/速度；b：弯曲应力；A、B、C：A、B、C三点位置,a：离心应力，m：平均值
'''

#######################################################################
##############################输入数据#################################

rho=8200

omega=4700*2*math.pi/60

A=[1.80 ,2.32 ,3.12, 4.10 ,5.48 ,7.05]
A=[x/10000 for x in A]

Z=[62.8 ,59.1 ,56.0 ,53.0 ,49.4 ,45.8]
Z=[x/100 for x in Z]

X=[0.53 ,0.41, 0.41 ,0.40 ,0.24 ,0.12]
X=[x/100 for x in X]

Y=[-0.41 ,-0.38, -0.30 ,-0.19, -0.11 ,-0.02]
Y=[x/100 for x in Y]

I_xi=[1 ,0.242,0.304, 0.484 ,0.939 ,1.802]
I_xi=[x/(100**4) for x in I_xi]

I_eta=[1 ,6.694 ,9.332, 12.520 ,17.570 ,23.740]
I_eta=[x/(100**4) for x in I_eta]

xi_A=[0 ,-2.685, -2.847 ,-2.938 ,-2.889 ,-2.894]
xi_A=[x/100 for x in xi_A]

eta_A=[0 ,0.797, 0.951 ,1.094 ,1.232 ,1.319]
eta_A=[x/100 for x in eta_A]

xi_B=[0 ,-0.084, -0.205 ,-0.303 ,-0.219 ,-0.302]
xi_B=[x/100 for x in xi_B]

eta_B=[0 ,-0.481, -0.521 ,-0.655 ,-0.749 ,-1.015]
eta_B=[x/100 for x in eta_B]

xi_C=[0 ,3.728, 3.909 ,4.060 ,4.366 ,4.597]
xi_C=[x/100 for x in xi_C]

eta_C=[0 ,0.773, 0.824 ,0.840 ,1.130, 1.3050]
eta_C=[x/100 for x in eta_C]

alpha=[31+2/3, 27+49/60, 25+19/60, 22+5.5/60 ,16+57/60 ,12+43/60]
alpha=[math.radians(x) for x in alpha]

Q=68
c1am=297
c1um=-410
rho1m=0.894
P1m=0.222
c2am=313
c2um=38
rho2m=0.75 
P2m=0.178
################################################################
####################计算离心拉伸应力#############################
Am=[]
Zm=[]
Xm=[]
Ym=[]

dZ=[]
dP=[]
sigma_c=[]
P=[0]

for i in range(0,5):
    Amave=(A[i]+A[i+1])/2
    Am.append(Amave)
    Zmave=(Z[i]+Z[i+1])/2
    Zm.append(Zmave)
    Xmave=(X[i]+X[i+1])/2
    Xm.append(Xmave)
    Ymave=(Y[i]+Y[i+1])/2
    Ym.append(Ymave)
    d1=Z[i]-Z[i+1]
    dZ.append(d1)
    d2=rho*omega*omega*Am[i]*Zm[i]*dZ[i]
    dP.append(d2)

for i in range(0,5):
    sum=P[i]+dP[i]
    P.append(sum)
for i in range(0,6):    
    sigma=P[i]/A[i]/1000000
    sigma_c.append(sigma)


################################################################
########################计算气动弯矩#############################
Px=[]
Py=[]
for i in range(0,5):
    Pxi=2*math.pi/Q*((rho1m*c1am*c1am-rho2m*c2am*c2am)+1000000*(P1m-P2m))*Zm[i]*dZ[i]
    Px.append(Pxi)
    Pyi=2*math.pi/Q*(rho1m*c1am*c1um-rho2m*c2am*c2um)*Zm[i]*dZ[i]
    Py.append(Pyi)


Mxa = [0]*5
Mya = [0]*5


for j in range(5):
    for i in range(j+1):
        Mxa[j] += (-Py[i] * (Zm[i] - Z[j+1]))
        Mya[j] += (Px[i] * (Zm[i] - Z[j+1]))
Mxa.insert(0,0)
Mya.insert(0,0)

################################################################
########################计算离心弯矩#############################

Fy=[]
Fz=[]
Mxc=[0]*5
Myc=[0]*5
for i in range(5):
    sum1=Am[i]*dZ[i]*rho*omega**2*Ym[i]
    sum2=Am[i]*dZ[i]*rho*omega**2*Zm[i]
    Fy.append(sum1)
    Fz.append(sum2)

for j in range(5):
    for i in range(j+1):
        Mxc[j] += (Fz[i] * (Ym[i] - Y[j+1]) - Fy[i] * (Zm[i] - Z[j+1]))
        Myc[j] += (-Fz[i] * (Xm[i] - X[j+1]))

Mxc.insert(0,0)
Myc.insert(0,0)

################################################################
##########################合成弯矩##############################

Mx=[]
My=[]
for i in range(6):
    sum1=Mxa[i]+Mxc[i]
    sum2=Mya[i]+Myc[i]
    Mx.append(sum1)
    My.append(sum2)
M_xi=[]
M_eta=[]
for i in range(6):
    M1=Mx[i]*math.cos(alpha[i])+My[i]*math.sin(alpha[i])
    M_xi.append(M1)
    M2=-Mx[i]*math.sin(alpha[i])+My[i]*math.cos(alpha[i])
    M_eta.append(M2)

################################################################
########################计算弯曲应力#############################

sigma_bA=[]
sigma_bB=[]
sigma_bC=[]
for i in range(6):
    a=(M_xi[i]*eta_A[i]/I_xi[i]-M_eta[i]*xi_A[i]/I_eta[i])/(10**6)
    b=(M_xi[i]*eta_B[i]/I_xi[i]-M_eta[i]*xi_B[i]/I_eta[i])/(10**6)
    c=(M_xi[i]*eta_C[i]/I_xi[i]-M_eta[i]*xi_C[i]/I_eta[i])/(10**6)
    sigma_bA.append(a)
    sigma_bB.append(b)
    sigma_bC.append(c) 

################################################################
######################合成ABC三点总应力##########################

sigma_A=[]
sigma_B=[]
sigma_C=[]
for i in range(6):
    a=sigma_c[i]+sigma_bA[i]
    sigma_A.append(a)
    b=sigma_c[i]+sigma_bB[i]
    sigma_B.append(b)
    c=sigma_c[i]+sigma_bC[i]
    sigma_C.append(c)

'''
#打印离心拉伸应力
print('sigma_c=',sigma_c)

#打印气动弯矩
print("Mxa=", Mxa)
print("Mya=", Mya)

#打印离心弯矩
print('Mxc=',Mxc)
print('Myc=',Myc)

#打印合成弯矩
print('Mx=',Mx)
print('My=',My)

#打印弯曲应力
print('sigma_bA=',sigma_bA)
print('sigma_bB=',sigma_bB)
print('sigma_bC=',sigma_bC)

#打印总应力
print('sigma_A=',sigma_A)
print('sigma_B=',sigma_B)
print('sigma_C=',sigma_C)
'''

# 将运算结果写入到csv文件中
data_lists=[sigma_c,Mxa,Mya,Mxc,Myc,Mx,My,sigma_bA,sigma_bB,sigma_bC,sigma_A,sigma_B,sigma_C]

names=['离心拉伸应力','x轴气动力弯矩','y轴气动力弯矩','x轴离心力弯矩','y轴离心力弯矩','x轴总弯矩','y轴总弯矩','A点弯曲应力','B点弯曲应力','C点弯曲应力','A点总应力','B点总应力','C点总应力']

# 指定 CSV 文件路径
csv_file_path = "data_lists.csv"
data_lists_transposed = list(map(list, zip(*data_lists)))


# 将 names 写入 CSV 文件
with open(csv_file_path, 'w', newline='') as csvfile:
    writer = csv.writer(csvfile)
    writer.writerow(names)

# 将 data_lists 写入 CSV 文件
with open(csv_file_path, 'a', newline='') as csvfile:
    writer = csv.writer(csvfile)
    for data in data_lists_transposed:
        writer.writerow(data)