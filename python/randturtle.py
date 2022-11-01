# Andrew Pronek
# COP 2500
# Assignment 3 Problemc C Random turtle
# 7/13/21

# the turtle command and the following random function

from turtle import * 

from random import randint

# to generate a random number 
for _ in range(1):
	x = randint(0, 100)
	print ( x )

# the patterns assigned to a 

if ( 0 < x < 25 ):
    forward ( 100 )
    left ( 40 )
    size ( 500 )
    right ( 180 )
    forward ( 50 )
elif ( 25 < x < 70 ):
    forward ( 200 )
    circle ( 200 )
    left ( 25 )
    circle ( 100 ) 
else:
    left ( 45 )
    forward ( 92 )
    circle ( 3 )
    circle ( 5 )
    circle ( 20 ) 

for _ in range(1):
	y = randint(0, 100)
	print ( y )
	
if ( 0 < y < 25 ):
    forward ( 100 )
    left ( 40 )
    dot ( blue )
    right ( 180 )
    forward ( 50 )
elif ( 25 < y < 75 ):
    forward ( 200 )
    circle ( 200 )
    left ( 25 )
    circle ( 100 ) 
else:
    left ( 45 )
    forward ( 92 )
    circle ( 3 )
    circle ( 5 )
    circle ( 20 ) 
