# Andrew Pronek
# COP 2500
# Assignment #3: Problem A: Sales Commission
# 7/6/21

# Hourly is 8/hr sales under 10 is 5$ while any sale more than 10 is counted
# as 15$

# both my variables inputs
hourly = int(input("How many hours did you work?\n"))

sales = int(input("How many sales did you make this week?\n"))

# my If statement for if its less than 10 to multiply by 5
if ( sales <= 10 ) :
    Commission = ( sales * 5 )
    
# my else statement that if its over 10 subtract 10 and multiply by 15
# while adding the max amount of sales before it switches to 15 per sale 
else: ( sales > 10 ); Commission = ( (sales - 10 ) * 15 ) + 50

# how money would be added up 
money = ( hourly * 8) + ( Commission )

print("You made $", money, " dollers this week", sep = "")

# ending notes a ( ; ) is needed after a else statement to fix syntax 
