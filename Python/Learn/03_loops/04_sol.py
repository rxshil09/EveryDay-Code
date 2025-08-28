string = input("enter the string you want to reverse: ")
rev_string = ""

for char in string:
    rev_string = char + rev_string
    print(rev_string)
    
print(rev_string)