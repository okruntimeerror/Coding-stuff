# Andrew Pronek
# COP 2500
# Assignment 3 Family 
# 7/9/21

# initial question to separate my parents from me and my brother
q1 = input( "Are you married?\n" ) 


# Only now do i realize i needed to have the word answer put into ("word")
# format but this is to differentiate between mom and dad 
if q1 == ("yes"):
    q2 = input("Do you work from home?\n")
    
# this is to differentiate between me and my brother 
else: q1 == ("no")
q3 = input("Do you play Guilty Gear?\n")
    

# all the possible groups 

if q1 == ("yes") and q2 == ("yes"):
    print ("You are Sarah")

elif q1 == ("yes") and q2 == ("no"):
    print ("You are Neal")

elif q1 == ("no") and q3 == ("no"):
    print ("You are Ben")

elif q1 == ("no") and q3 == ("yes"):
    print ("You are Andrew") 

    
