from random import randint

x = int( input("Roll, a number\n"))
y = randint ( 1, 6) 

while ( x != y ):
    x = int( input("Roll, a number\n")) 
    print ( "Sorry please roll again" )
    if ( x == y ):
        print ( "good job" ) 

