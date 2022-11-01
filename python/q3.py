reserve = 300
while reserve >= 25:
   I =  int(input("How many items would you like to dip?\n"))
   loss = (I * 2)
   reserve = reserve - loss
   if reserve <= 25 :
       print("the fountain is out of chocholate")
       break
