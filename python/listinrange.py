# Andrew Pronek
# COP 2500
# assignment 7 part C 
# 7/31/29

def getValsInRange(vals,low,high):
    newlist = []
    # same system as previouse assignment
    
    for X in range( low , high + 1):
        # however we just append them 
      if vals.count(X) :
          newlist.append(X)
      if vals.count(X) > 1:
        # if there is more we just append the duplicates 
          newlist.append (X) 
    print(newlist)
    


def testValsInRange():
 print(getValsInRange([3,12,6,5,2,8,9], 4, 9))
 print(getValsInRange([100, 99, 98, 97], 0, 100))
 print(getValsInRange([30,40,50,55,59,20], 60, 100))
 print(getValsInRange([36,16,25,24,36,23,23,20,32], 23,35))
testValsInRange()
