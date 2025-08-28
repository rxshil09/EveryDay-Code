#include <iostream>

int main()
{
    std::string questions[] = {"1. when was C++ created?: ",
                               "2. who invented C++?: ",
                               "3. what is predecessor of C++?: ",
                               "4. is earth flat?: "};

    std::string options[][4] = {{"A. 1875", "B. 1979", "C. 1985", "D. 1986"},
                                {"A. GV rossum", "B. Bjarne Stroustrup", "C. John", "D. Skylar"},
                                {"A. C", "B. C#", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. its trianglular"}};

    char answers[] = {'C', 'B', 'A', 'B'};
    
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i<size; i++)
    {
        std::cout << "**************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "**************************************\n";

        for(int j = 0; j<sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i])
        {
            std::cout << "CORRECT!\n";
            score++;
        }
        else
        {
            std::cout << "WRONG!\n";
            std::cout << "Answer is " << answers[i] << '\n';
        }
    }
    
    std::cout << "**************************************\n";
    std::cout << "                RESULT                \n";
    std::cout << "**************************************\n";

    std::cout << "Total correct answers: " << score << '\n';
    std::cout << "Total no. of questions: " << size << '\n';
    std::cout << "Percentage = " << (score/(double)size)*100 << "%" <<'\n';
    return 0;
}