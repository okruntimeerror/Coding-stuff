# Andrew pronek
# cop 2500
# assignment 7 part b 
# 7/30/21


def valsInRange(vals,low,high):
    total = 0
    # counts all the values between the two numbers given

    
    for x in range ( low , high+1 ):
            # if the count finds a value corelating with one in vals it adds it
        if vals.count(x):
            total = total + vals.count(x)
    print( total )
 
     

def testValsInRange():
 print(valsInRange([3,12,6,5,2,8,9], 4, 9))
 print(valsInRange([100, 99, 98, 97], 0, 100))
 print(valsInRange([30,40,50,55,59,20], 60, 100))
 print(valsInRange([36,16,25,24,36,23,23,20,32], 23,35))
testValsInRange()
