score = int(input("enter your score: "))

if 0<=score<60:
    print("F")
elif score<70:
    print("D")
elif score<80:
    print("C")
elif score<90:
    print("B")
elif score<=100:
    print("A")
else:
    print("enter a valid score")