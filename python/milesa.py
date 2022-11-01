# Andrew Pronek
# COP 2500
# Assignment 3 Miles A 
# 7/13/21

# my grouping of my variables being A and B for the range 

days = int(input( "How many days do you plan to run?\n"))
miles = int(input("How many miles per day do you plan to run?\n"))
start = 1


# actual equation for calculating the increasing of adding miles since its
# a simple multiplication just do miles * days for that that.

for days in list ( range ( start, days+1 )):
    print( "after day", days,"you will have completed", (miles * days) , "miles")
    days = days + 1
