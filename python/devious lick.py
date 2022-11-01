import random   
import string  
import secrets # import package  
num = 4 # define the length of the string  
# define the secrets.choice() method and pass the string.ascii_letters + string.digits as an parameters.  
res1 = ''.join(secrets.choice(string.ascii_letters + string.digits) for x in range(num))
res2 = ''.join(secrets.choice(string.ascii_letters + string.digits) for x in range(num))
res3 = ''.join(secrets.choice(string.ascii_letters + string.digits) for x in range(num))
res4 = ''.join(secrets.choice(string.ascii_letters + string.digits) for x in range(num)) 
res5 = ''.join(secrets.choice(string.ascii_letters + string.digits) for x in range(num))   
x = 0
for x in range (1):
  print(res1.upper(),res2.upper(),res3.upper(),res4.upper(),res5.upper(),sep="-")
