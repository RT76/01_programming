from math import *
def cr(r, m):
    return m / 2 / pi / rou / r / h
# 涡轮转子叶片
# 设计常数
r_move_out_p = 0.12
c2u_p_real=23
mp = 0.15
mt=0.1
w = 3000 / 60 * 2 * pi
P = 130
tao_stat_t = 1.3
# 几何常数
h=0.018
r_move_in_p = 0.05
r_move_in_t = 0.12
r_stat_out_t = 0.128
r_move_out_t = 0.05
r_stat_in_t = 0.185
# 物性常数
rou = 1.29


c4u_t = 0  # 涡轮转子出口周向无速度
c3u_t = mp * r_move_out_p * c2u_p_real / (mt * r_move_in_t)
# print(c3u_t)
u3 = w * r_move_out_t
u4 = w * r_move_in_t
c3r_t = cr(r_move_in_t, mt)
c4r_t = cr(r_move_out_t, mt)
beta3_t = atan(c3u_t - u3) / c3r_t
beta4_t = atan(-u4 / c4r_t)
print("涡轮转子进口几何角", beta3_t, "涡轮转子出口几何角", beta4_t)
beta_mid_t = (beta4_t + beta3_t) / 2
# print(beta4_t, beta3_t)
r_move_mid_t = (r_move_in_t + r_move_out_t) / 2
cr_mid_t = cr(r_move_mid_t, mp)
wavg_t = cr_mid_t / cos(beta_mid_t)
Nb_t_lim = mp / (2 * rou * wavg_t ** 2 * r_move_mid_t * h) * (r_move_out_t * c3u_t - r_move_in_t * c4u_t) / (r_move_out_t - r_move_in_t)
print("涡轮转子叶片数下限", abs(Nb_t_lim))
print("涡轮转子叶片数", 16)
N_move_t = 2 * pi * r_move_out_t * cos(beta4_t) / 0.01
print("涡轮转子叶片数", N_move_t)
# 涡轮静子
c2r_t = cr(r_stat_out_t, mt)
c1r_t = cr(r_stat_in_t, mt)
c2u_t = c3u_t * r_move_in_t / r_stat_out_t
c1u_t = 0
beta1_t = 0
beta2_t = atan(c2u_t / c2r_t)
print("涡轮静子进口几何角", beta1_t, "涡轮静子出口几何角", beta2_t * 180 / pi)
l = 0.065
t = l *0.75  # 栅距
N_stat_t = 2 * pi * r_stat_in_t / t
print("涡轮静子数", N_stat_t)  # 取25？
# 校核涡轮压降
dp_t=P/mt*rou/0.6
print("涡轮压降",dp_t)
