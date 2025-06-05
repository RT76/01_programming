import turtle

# 设置画布和画笔
screen = turtle.Screen()
screen.bgcolor("white")
pen = turtle.Turtle()
pen.shape("turtle")
pen.color("red")
pen.speed(1)

# 绘制爱心
pen.up()
pen.goto(0, -200)
pen.down()
pen.begin_fill()
pen.left(140)
pen.forward(224)
for _ in range(200):
    pen.right(1)
    pen.forward(2)
pen.left(120)
for _ in range(200):
    pen.right(1)
    pen.forward(2)
pen.forward(224)
pen.end_fill()

# 关闭画布
screen.mainloop()
