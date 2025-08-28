age = int(input("enter your age: "))
day = input("enter the day: ")

price = 12 if age>=18 else 8

if day == 'wednesday':
    price-=2
    
print("ticket price for you is", price,"$")
