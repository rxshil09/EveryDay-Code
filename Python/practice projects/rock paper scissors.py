import random
import math


def main():
    
    user_wins = 0
    comp_wins = 0
    total_ties = 0
    options = ['rock', 'paper', 'scissor']
    while True:
        user_input = input("type Rock/Paper/Scissor or q to quit: ").lower()
        
        if user_input =='q':
            break
        
        if user_input not in options:
            continue
        
        comp_inp = options[math.floor(random.random()*3)]
        # print(comp_inp)
        
        if user_input == comp_inp:
            print("tie, nobody won")
            total_ties += 1
            continue
        
        if user_input == 'rock' and comp_inp == "scissor":
            print("you won, computer lost!")
            user_wins += 1
        elif user_input == "paper" and comp_inp == "rock":
            print("You won, computer lost!")
            user_wins += 1
        elif user_input == "scissor" and comp_inp == "paper":
            user_wins += 1
            print("You won, computer lost!")
        else:
            print("you lose, computer won!")
            comp_wins += 1

    print("your total wins: ",user_wins)
    print("computer wins: ", comp_wins)
    print("total ties: ", total_ties)

if __name__ == "__main__":
    main()