# Andrew Pronek
# COP 2500
# Assignment 5 problem C
# 7/25/21
# inputs

WAGE =  float(input("what is your hourly\n"))

RWW = int(input("What is the regular amount of hours you work \n"))

OVTpayrate = float(input("What is your overtime rate?\n"))

week = int(input("How many weeks are you working?\n"))

HW = int(input("How many hours did you work in the first week \n"))
# end of inputs

# previous assignement for overtime
def overtimePay( WAGE , RWW , HW ,OVTpayrate ):
    if ( HW >= RWW ):
        OVTpay = ( int( HW ) - int( RWW ) ) * float( WAGE ) * OVTpayrate
    else:
        OVTpay = 0
    return OVTpay

#previous assignment for overtime
def regularPay( WAGE , HW , RWW):
    if (HW >= RWW):
        REGpay = RWW * WAGE
    else:
        REGpay = WAGE * HW
    return REGpay

# elderich abomination which accepts only my flesh

def Main( overtimePay , regularPay , week, HW):
    start = 1
    OVTpay = overtimePay( WAGE , RWW , HW , OVTpayrate )
    REGpay = regularPay( WAGE , RWW , HW  )
    test = OVTpay + REGpay
# These are to my belief supposed to be inputs into this system



# I love how i cant just reintroduce a global value for HW and have it run again
# it might be i just dont know how to format this correctly but i simply put the previous functions
# into this after the first rotation 
    for start in list( range ( start , week +1 )):
        print("week",start,"regular pay =$",REGpay,"overtimepay = #",OVTpay,"total pay =$",test)
        if (start != week ) :
            HW = int(input("How many hours did you work in the next week\n"))
        if week > 1:
          REGpay = (HW * WAGE )
        if ( HW >= RWW ):
          OVTpay = ( int( HW ) - int( RWW ) ) * float( WAGE ) * OVTpayrate
        if start == week:
            print ("over", week,"weeks","you made $", NuOVTpay + NUREGpay  )

# the funny number maths below add up almost correctly at the end of the month

        
        test = OVTpay + REGpay
        start = start + 1
        NuOVTpay = OVTpay+OVTpay
        NUREGpay = REGpay+REGpay
        

Main( overtimePay , regularPay , week, HW)


    
