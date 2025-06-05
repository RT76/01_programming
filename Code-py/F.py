import numpy as np
import matplotlib.pyplot as plt

# 涡轮盘数据
######################################################################################
#角速度 rad
omega = (12500 * np.pi) / 30  
#密度 kg/m^3
rho = 8e3 
# 泊松比
mu = 0.3  
# 涡轮盘截面半径/m
r = np.array([0, 0.05, 0.1, 0.14, 0.15, 0.158, 0.166, 0.174])  
# 涡轮盘厚度/m
h = np.array([0.0486, 0.039, 0.0297, 0.0224, 0.0186, 0.0160, 0.018, 0.023])  
# 弹性模量/Pa
E = np.array([1.62e11, 1.62e11, 1.57e11, 1.48e11, 1.40e11, 1.37e11, 1.34e11, 1.3e11])  
# 涡轮盘温度/°C
t = np.array([165, 165, 250, 360, 400, 430, 460, 500])  
# 线膨胀系数 1/°C
alpha = np.array([16.5e-6, 16.5e-6, 17.1e-6, 18.2e-6, 19.0e-6, 19.4e-6, 19.7e-6, 20.3e-6]) 

# 根据轮盘通用计算公式建立第 i 个圆环内外径上应力的递推公式
m = []
a = []
b = []
c_r = []
c_theta = []
sigma = []

for i in range(7):
    m.append(r[i] / r[i + 1])
    a.append((1 + m[i] ** 2) / 2)
    b.append((1 - m[i] ** 2) / 2)
    c_r.append((2 * (1 + mu) * m[i] ** 2 + (1 - mu) * m[i] ** 4 - (3 + mu)) / 8)
    c_theta.append((2 * (1 + mu) * m[i] ** 2 - (1 - mu) * m[i] ** 4 - (1 + 3 * mu)) / 8)
    sigma.append(rho * omega ** 2 * r[i] ** 2)

M1 = []
C1 = []

for i in range(7):
    M1.append(np.array([[a[i], b[i]], [b[i], a[i]]]))
    C1.append(np.array([[c_r[i] * sigma[i]], [c_theta[i] * sigma[i]]]))

sigma_o1 = [None] * 7
sigma_i1 = [None] * 7  # 分别为第 i 圆盘外、内径上的应力。应力包括径向应力和周向应力

# 建立第 i-1 个圆环和第 i 个圆环套接处的 i-1 截面上处，内外层两圆环所受径向力的平衡关系和变形协调一致关系
N1 = []
D1 = []

for i in range(7):
    N1.append(np.array([[h[i] / h[i + 1], 0], [mu * (h[i] / h[i + 1] - E[i + 1] / E[i]), E[i + 1] / E[i]]]))
    D1.append(np.array([[0], [E[i + 1] * (alpha[i] * t[i] - alpha[i + 1] * t[i + 1])]]))

# 建立整个轮盘的应力关系
A = []
B = []
AW = []
BW = []

for i in range(7):
    if i == 0:
        A.append(M1[0])
        B.append(C1[0])
        AW.append(np.dot(N1[0], A[0]))
        BW.append(np.dot(N1[0], B[0]) + D1[0])
    else:
        A.append(np.dot(M1[i], AW[i - 1]))
        B.append(np.dot(M1[i], BW[i - 1]) + C1[i])
        AW.append(np.dot(N1[i], A[i]))
        BW.append(np.dot(N1[i], B[i]) + D1[i])
#print(A, B, AW,BW)
xgmar0 = 2.0864e+08
xgmat7 = -4.4228e+08


'''sigma_i1[0] = np.array([[2.0864e+08], [2.0864e+08]])

for i in range(7):
    sigma_o1[i] = np.dot(A[i], sigma_i1[0]) + B[i]

for i in range(6):
    sigma_i1[i + 1] = np.dot(AW[i], sigma_i1[0]) + BW[i]
print(sigma_o1)
'''

# 设置初始应力，第一次试算
sigma_i1[0] = np.array([[208636782], [208636782]])

for i in range(7):
    sigma_o1[i] = np.dot(A[i], sigma_i1[0]) + B[i]

for i in range(6):
    sigma_i1[i + 1] = np.dot(AW[i], sigma_i1[0]) + BW[i]




# 求出涡轮盘平均半径处的应力
mr = [r[0]]
for i in range(1, 8):
    mr.append((r[i - 1] + r[i]) / 2)
mr.append(r[7])

PJxgma = [None] * 8
PJxgmar = []
PJxgmaseta = []
PJxgmarn = sigma_i1[0]

for i in range(9):
    if i == 0:
        PJxgmar.append(PJxgmarn[0, 0])
        PJxgmaseta.append(PJxgmarn[1, 0])
    elif i == 8:
        rwai = sigma_o1[6]
        PJxgmar.append(rwai[0, 0])
        PJxgmaseta.append(rwai[1, 0])
    else:
        PJxgma[i] = 0.5 * (sigma_i1[i - 1] + sigma_o1[i - 1])
        a = PJxgma[i]
        PJxgmar.append(a[0, 0])
        PJxgmaseta.append(a[1, 0])

# 画出涡轮盘平均半径处的应力图

plt.plot(mr, PJxgmar, label='sigma_r')
plt.plot(mr, PJxgmaseta, label='sigma_theta')
plt.xlabel('r/m', fontsize=10.5)
plt.ylabel('sigma/MPa', fontsize=10.5)
plt.title('jpg')
plt.legend()
plt.grid(True)
plt.show()

delta=PJxgmar
print(PJxgmar)
print(PJxgmaseta)