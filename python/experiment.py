import random

def getResponse(value):
    if (value == 1 ):
        print ("Yes")
    elif (value == 2 ):
        print("no")
    else:
        print ( "maybe")


def main():

    responses = [ "Yes" , "no" ," maybe"]

    choice = random.randint (0,2)

    print (responses [choice])

main()
