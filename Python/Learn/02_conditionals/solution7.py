size = input("how would you like your coffee? (small, medium, large) \n")
extra = input("do you want a extra shot of espresso? (yes or no) \n")

if extra == 'yes':
    coffee = size + " coffee with extra espresso shot"
else:
    coffee = size + " coffee"

print("here's your order", coffee)