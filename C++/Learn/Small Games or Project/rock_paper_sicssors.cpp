#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    
    player = getUserChoice();
    std::cout << "your choice: ";
    showChoice(player);
    
    computer = getComputerChoice();
    std::cout << "computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    
    return 0;
}

char getUserChoice()
{
    char player;

    std::cout << "*********************************************\n";
    std::cout << "        ROCK - PAPER - SCISSORS GAME\n";
    std::cout << "*********************************************\n";
    do
    {
        std::cout << "choose the character from the following:\n";
        std::cout << "'r' = rock\n";
        std::cout << "'p' = paper\n";
        std::cout << "'s' = sicssors\n";
        std::cin >> player;

    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int num = (rand() % 3) + 1;

    switch(num)
    {
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice)
{   
    switch(choice)
    {
        case 'r' : std::cout << "rock\n";
                   break;
        case 'p' : std::cout << "paper\n";
                   break;
        case 's' : std::cout << "sicssors\n";
                   break;
    }
}
void chooseWinner(char player, char computer)
{
    if(player == 'r' && computer == 'r') std::cout << "tie!";    
    if(player == 'r' && computer == 'p') std::cout << "you lose!";    
    if(player == 'r' && computer == 's') std::cout << "you win!";

    if(player == 'p' && computer == 'r') std::cout << "you win!";    
    if(player == 'p' && computer == 'p') std::cout << "tie";    
    if(player == 'p' && computer == 's') std::cout << "you lose!";

    if(player == 's' && computer == 'r') std::cout << "you lose!";    
    if(player == 's' && computer == 'p') std::cout << "you win!";    
    if(player == 's' && computer == 's') std::cout << "tie!";    
}