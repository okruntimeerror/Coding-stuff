listdata = []

listdata.append(2)
listdata.append (5)


N = int(input("How many Characters would you like to add to guilty gear\n"))


for index in list(range(1, N +1 )):
       value = int(input("what is the value\n"))
       listdata.append(value)


print (listdata) 
