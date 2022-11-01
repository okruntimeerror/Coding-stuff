# Andrew Pronek
# COP 2500
# Assignment 3 Miles B 
# 7/13/21


# all of my inputs with start being 1 for proper counting and u is miles added
days = int(input( "How many days do you plan to run?\n"))
miles = int(input("How many miles per day do you plan to run?\n"))
weekend = int(input("How many miles on the weekend do you plan to run?\n" )) 
start = 1
u = 0

# the for loop with the actually weeks being found if the days could be divided
# by 7 
for days in list ( range ( start, days+1 )):
    if( days%7 == 0 ) or ( (days+1)%7  == 0 ):
        u = u + weekend
    else:
        u = u + miles
    print( "after day", days,"you will have completed", u , "miles")
    days = days + 1

