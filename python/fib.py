fib=[]
qu=[]
qu2=[]
for i in range(101):
    if i == 0 or i == 1:
        fib.append(1)#前两项为1
    else:
        fib.append(fib[i-1]+fib[i-2])#递推关系
    qu.append(fib[i]/fib[i-1])#研究相邻项比值
    qu2.append(fib[i-1]/fib[i])
print(fib)
print(qu)
print(qu2)