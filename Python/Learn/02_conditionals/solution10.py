animal = input("what kind of pet you have? \n")
age = int(input("enter you pet's age: "))

if age<=3:
    if animal == 'cat':
        food = "baby" + animal + "food"
    if animal == 'dog':
        food = "puppy food"
else:
    food = animal + " food"
    
print(food)