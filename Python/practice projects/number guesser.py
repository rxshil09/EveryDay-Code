import random

n = int(input("Enter 'n' u want to guess from 0 to n: "))
random_num = random.randrange(0, n)
print(random_num)
guess = int(input(f"Guess the number between 0 and {n}: "))
no_of_guesses = 1

while guess != random_num:
    if guess > random_num:
        print("\ngo lower")
        guess = int(input("Guess the number again: "))
        no_of_guesses += 1
    else:
        print("\ngo higher")
        guess = int(input("Guess the number again: "))
        no_of_guesses += 1
        
print("you guessed it in", no_of_guesses,"tries.")
