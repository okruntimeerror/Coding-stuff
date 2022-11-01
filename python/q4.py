import random
B = 0
score1 = 0
score2 = 0
while score1 !=2 or score2 !=2 :
    p1 = int(input("1)Paper\n2)Rock\n3)Scissors\n"))
    p2 = random.randint(1,3)
    
    if p1 == 1 and p2 == 2:
        score1 = score1 + 1
        print("you won this round\n")
    if p1 == 2 and p2 == 3:
        score1 = score1 + 1
        print("you won this round\n")
    if p1 == 3 and p2 == 1:
        score1 = score1 + 1
        print("you won this round\n")
        
    if p1 == p2:
        print("its a tie\n")
        
    if p2 == 1 and p1 == 2:
        score2 = score2 + 1
        print("you lost this round\n")
    if p2 == 2 and p1 == 3:
        score2 = score2 + 1
        print("you lost this round\n")
    if p2 == 3 and p1 == 1:
        score2 = score2 + 1
        print("you lost this round\n")
    

    if score2 == 2:
        print("you are the loser")
        break
    if score1 == 2:
        print("you are the winner")
        break

  
