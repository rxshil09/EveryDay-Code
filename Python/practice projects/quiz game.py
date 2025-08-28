print("====================== Quiz ======================")

playing = input("Do you want to play? (yes/no) ")

if playing.lower() != "yes":
    quit()

score = 0

answer1 = input("what does cpu stands for? ")
if answer1.lower() == "central processing unit": score+=1

answer2 = input("do u watch anime? ")
if answer2.lower() == "yes": score+=1

answer3 = input("Is Python a programming language? (yes/no) ")
if answer3.lower() == "yes": score += 1

answer4 = input("What does RAM stand for? ")
if answer4.lower() == "random access memory": score += 1

answer5 = input("What planet do we live on? ")
if answer5.lower() == "earth": score += 1

print("total score = ", score)
print("percentage correct = ", (score/5)*100, "%")