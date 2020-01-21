import turtle
from math import sin

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, longitud):
    if longitud > 0:
        myTurtle.forward(longitud)
        myTurtle.left(sin(longitud))
        draw(myTurtle,longitud-10)

draw(myTurtle, 300)
myWin.exitonclic





