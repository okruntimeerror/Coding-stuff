# Andrew Pronek
# COP 2500
# assignment 7 part A
# 7/29/21

Choice = 0
listdata = []
# just the pre print of the options before an actual input
print("1. Add a number")
print("2. Remove a number")
print("3. Print the list")
print("4. Quit") 



while Choice != 4: # the main choice that controls everything 
    Choice = int(input("What selection would you like to make\n"))
    print("1. Add a number")
    print("2. Remove a number")
    print("3. Print the list")
    print("4. Quit") 

    if Choice == 1:
        X = int(input("What number would you like to add?\n"))
        listdata.append(X) # add the numbah 


    if Choice ==2:
        Y = int(input("What number would you like to remove?\n"))
        listdata.remove(Y) # remove the numbah in the first occurence

    if Choice == 3: # list of numbahs 
        print(listdata)


    elif Choice == 4: # wanna leave the numbahs 
        print("Thanks for using the list generator")
        break 

    elif Choice < 1 or Choice > 4 : # the wrong numbah was input into the numbahs
        print("error 404 option not found")
