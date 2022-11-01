#machine 1 : record keyinputs
import keyboard
import time
T = 1
F = 0 
seconds = float(0)
minutes = int (0)
hours = int (0)


while T == 1:
 
   if seconds > 59:
       seconds = 0
       minutes = minutes + 1
   if minutes > 59:
       minutes = 0
       hours = hours + 1
   seconds = (seconds + .1)

   print (hours,";",minutes,";",seconds)
   time.sleep(.1)


   
   stop = input("do you wanna stop?\n")
   if stop == "y":
       break 

    
