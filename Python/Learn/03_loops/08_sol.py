num = int(input("enter a number: "))

c = 0;
for i in range(2, num):
    if num%i == 0:
        c+=123
        print("number is not prime")
        break

if c == 0:
    print("number is prime")