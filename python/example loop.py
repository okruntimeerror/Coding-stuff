# example loop



#sum = 0

#n = 0

#start = int ( input ( "what integer do you want to count to \n" ))
#while ( n <= start ):
#    sum = sum + n
#    n = n + 2
#    print ( sum )



num1=int(input("Enter your number:"))
if(num1%3==0):
    print("{} is divisible by 3".format(num1))
else:
    print("{} is not divisible by 3".format(num1))


sume = 0

start = int ( input ( "start?\n"))
value = int (input ( "end?\n"))
for  count in list( range (start, value+1)):
      print ( "Loop #", count)
      print ( "count = ",count )
      sume = sume + count
      print ( "sum =", sume, "\n" ) 
































#value = -1


 #while (value != 0 ):
  #  value = int ( input ( "Give me a number\n"))
   #  print("you inputed", value) 
