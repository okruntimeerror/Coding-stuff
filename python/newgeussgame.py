# Andrew Pronek
# COP 2500
# Assignment 6 problem A 
# 7/27/21

import random
x = random.randint(1,100)
Chances = 0
geuss = 0 
G = 0
# end of inputs


while geuss != x:
    geuss = int(input("What number is it\n"))
    G = G + 1 # actual amount of geusses
    if geuss < x:
        print (" too low")
    if geuss > x:
        Chances = Chances + 1 # function that adds chances after geussing too high
        print( "too high")
    if Chances == 4: # ends the game if you have 4 chances
        print ("Sorry you lost by making too many high geusses\n","The correct number was", x)
        break
    elif geuss == x: # victory statement
        print ("Congrats, you got the number in",G,"geusses of which", Chances,"were too high")
    
