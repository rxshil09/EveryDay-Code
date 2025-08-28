string = input("enter the string: ")

for char in string:
    if string.count(char) == 1:
        print("first character which is not repeated is", char)
        break
