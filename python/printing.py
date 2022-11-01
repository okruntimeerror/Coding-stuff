# Andrew Pronek
# COP 2500
# Assignment #2 Problem B 
# 7/2/21

# collects the area value
Area = int(input("What's the area needed for printing in square inches?\n"))

# Collects the dimensions of the page
L = int(input("How long is a single page in inches?\n",))-2
W = int(input("How wide is a single page in inches?\n",))-2

# equations to find the amount that fits to the page 
LW = (L * W)

# the .5 is added so that if there is any left over space needed a
# whole page is given for what remains in the book. 
P = round((Area/LW)+.5)

print("the book will take",P, "pages to print.", sep=" ")    
