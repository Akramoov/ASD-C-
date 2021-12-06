import turtle as t
t.bgcolor("black")
t.speed(0)
t.hideturtle()
t.penup()
t.goto(-40,10)
t.pendown()
c = ("black", "white")
for i in range(340):
    t.bgcolor(c[i%2])
    if i <255//3:
        t.color ("red")
    elif i<255*2//3:
        t.color("orange")
    elif i<255*4//3:
        t.color("yellow")
    elif i<255*5//3:
        t.color("green")
    t.forward(50+i)
    t.right(91)
    t.bgcolor("black")
t.done()