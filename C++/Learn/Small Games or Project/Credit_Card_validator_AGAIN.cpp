#include <iostream>  //by luhn method

int getDigit(const int number);
int sumOddDigits(std::string CardNumber);
int sumEvenDigits(std::string CardNumber);

int main()
{
    std::string CardNumber;
    int result = 0;

    std::cout << "enter the credit card no.";
    std::cin >> CardNumber;

    result = sumEvenDigits(CardNumber) + sumOddDigits(CardNumber);

    if(result % 10 == 0) std::cout << "Card no. is valid!";
    else std::cout << "card no. is not valid";

    return 0;
}

int getDigit(const int number)
{
    return number%10 + ((number/10) % 10);
}
int sumOddDigits(std::string CardNumber)
{
    int sum = 0;

    for(int i = CardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += CardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(std::string CardNumber)
{
    int sum = 0;

    for(int i = CardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((CardNumber[i] - '0') * 2);
    }
    return sum;
}
