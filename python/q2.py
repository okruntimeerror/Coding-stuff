p = int(input("how many problem points has the UCF team scored?\n"))

penalty = int(input("How many penalty points has the UCF team scored?\n"))

if p < 8:
    print ("the UCF team is under their average")
if p > 8:
    print ("the UCF team is above their average")
elif p == 8 :
    if penalty < 450:
        print ("the UCF team is under their average")
    if penalty > 450:
        print ("the UCF team is above their average")
    elif penalty == 450:
        print ("They are tied for their average") 
