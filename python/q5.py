


def ticketCost(A,C,S):
    X = ( A * 14)
    Y = ( C * 12)
    Z = ( S * 12)
    Gprice = X + Y + Z 
    return Gprice

def mealCost(A,C,S) :
    X = ( A * 15 )
    Y = ( C * 10 )
    Z = ( S * 15 )
    Fprice = X + Y + Z  
    return Fprice

def main():
    a = ticketCost(2,3,1)
    
    b = mealCost(2,3,1)
    print ( "the price of the movies will be",a + b,"$" )
main()
