#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int num, guess, tries = 0;

    num = (rand() % 100) + 1;

    for(int i = 0; ; i++)
    {
        std::cout << "enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num) std::cout << "Too high\n";
        else if (guess < num) std::cout << "Too low\n";
        else std::cout << "correct\n" << "the no. of tries are " << tries;
        
        if(guess == num) break;        
    }
    return 0;
}