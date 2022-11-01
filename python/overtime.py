
# Pre-conditions: payPerHour is a positive floating pt
# number representing the pay per hour. regWorkWeek
# represents the number of hours in a regular work week
# (int). hoursWorked is the number of hours the employee
# worked (int). overtimeRate is the multiplicative rate
# for overtime pay.
# Post-condition: Returns the overtime pay for the employee.

def overtimePay(payPerHour, regWorkWeek, hoursWorked,
overtimeRate):
    
    #the basic separation for if they worked overtime
    if ( hoursWorked >= regWorkWeek ):
        
        # the actual equation with hours work subtracted from work week
        # followed by the pay and ovt rate
        OVTpay = ( int(hoursWorked) - int(regWorkWeek) ) * float(payPerHour) * overtimeRate
        print( OVTpay )

        # you dont recieve OVTpay if you didnt work overtime
    else:
        OVTpay = 0
        print ( OVTpay ) 
    return ""


def testOvertimePay():
 print(overtimePay(8.25, 40, 30, 1.5))
 print(overtimePay(12.50, 30, 40, 2.0))
 print(overtimePay(9.99, 80, 100, 2.5))
testOvertimePay()
