#include<iostream>
#include<iomanip>

void ShowBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice;

    for(int i = 0;; i++)
    {
        std::cout << "***********************\n";
        std::cout << "enter your choice:\n";
        std::cout << "***********************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n\n";
        std::cin >> choice;

        std::cin.clear();   // SEARCH IT UP OR ASK!!!
        fflush(stdin);      // SEARCH IT UP OR ASK!!!

        switch(choice)
        {
            case 1:  
                ShowBalance(balance);
                std::cout << '\n';
                break;
            case 2:
                balance += deposit();
                ShowBalance(balance);
                std::cout << '\n';
                break;
            case 3:  
                balance -= withdraw(balance);
                ShowBalance(balance);
                std::cout << '\n';
                break;
            case 4:  
                std::cout << "thanks for visiting!\n";
                break;
            default:  
                std::cout << "invalid choice!\n\n";
        }

        if(choice == 4) break;
    }

    return 0;
}

void ShowBalance(double balance)
{
    std::cout <<"your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
    double amt;
    std::cout << "enter the amount you want to deposit: ";
    std::cin >> amt;

    if(amt > 0)
        return amt;
    else
    { 
       std::cout << "thats not a valid amount!\n";
       return 0;
    }
}
double withdraw(double balance)
{
    double amt;
    std::cout << "enter the amount you want to withdraw: ";
    std::cin >> amt;

    if(amt > balance)
    {
        std::cout << "insufficient funds! \n";
        return 0;
    }
    else if (amt < 0)
    {
        std::cout << "thst's not a valid amount\n";
        return 0;
    }
    else 
        return amt;
}