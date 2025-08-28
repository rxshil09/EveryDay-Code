password = input("enter the password for strength check: ")
n = len(password)

if n<6:
    print("weak")
elif n<11:
    print("medium")
else:
    print("strong")