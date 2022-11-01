# Lecture notes 7/13/21



# child discount 5$
# college discout 7.50$
# veteran discount 7.50$
# senior discount 5$
# normal - 10$

age = int( input ( " What is your age \n" ))
college = input (" Are you in college?\n")
veteran = input (" are you a veteran/\n")

if ( age <= 12 or age >= 65 ) :
    price = 5 
elif (college == "yes" or veteran == "yes" ):
    price = 7.5
else:
    price = 10

print( price ) 
