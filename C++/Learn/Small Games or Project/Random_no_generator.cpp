#include<iostream>
#include<ctime>

int main()
{
    srand(time(NULL)); // or srand(time(0); both are same!!

    int num1 = (rand() % 6) + 1; //random no. between 1 and 6
    int num2 = (rand() % 20) + 1; //random no. between 1 and 20
    int num3 = (rand() % 10) + 1; //random no. between 1 and 10

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3;

    /*can use this and make a random event generator by using switch case!
        switch(num)
        {
            case 1: (event)
            case 2:
            case 3:
            ...
        }
    */
    return 0;
}