
from math import sqrt


#t,u,q=0.0,0.0,0.0
t=float(input())
u=float(input())
q=0.9277e-14/(u*pow((t*(1+2.264e-2*sqrt(t))),1.5))

print(q)