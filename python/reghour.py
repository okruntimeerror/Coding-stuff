# Pre-conditions: payPerHour is a positive floating pt
# number representing the pay per hour. regWorkWeek
# represents the number of hours in a regular work week
# (int). hoursWorked is the number of hours the employee
# worked (int).
# Post-condition: Returns the regular pay for the employee.

def regularPay(payPerHour, regWorkWeek, hoursWorked):
    if  hoursWorked >= regWorkWeek :
        overtimepay = regWorkWeek * payPerHour
        print (overtimepay)
        
    else:
       print( payPerHour * hoursWorked )
    
#Here is a testing function to test your code and what it should print out:


def testRegularPay():
 print(regularPay(8.25, 40, 30))
 print(regularPay(12.50, 30, 40))
 print(regularPay(9.99, 80, 80))
testRegularPay()
