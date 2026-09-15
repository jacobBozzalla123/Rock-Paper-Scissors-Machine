#include <algorithm>
#include <iostream>
#include <random>

int main()
{
    std:: string playerChoice;
    int playerNum = 0;

    std::cout << "Welcome to the Rock Paper Scissors Machine!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please enter either Rock, Paper, or Scissors to begin." << std::endl;
    std::cin >> playerChoice;
    std::cout << "So you have chosen " << playerChoice << "." << std::endl;
    std::cout << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, 2);

    // Save the generated number into the variable
    int randomNum = distrib(gen);

    if(randomNum == 0)
    {
        std::cout << "I choose Rock. ";
    }
    else if(randomNum == 1)
    {
        std::cout << "I choose Paper. ";
    }
    else
    {
        std::cout << "I choose Scissors. ";
    }


    if(playerChoice == "Rock") playerNum = 0;
    if(playerChoice == "Paper") playerNum = 1;
    if(playerChoice == "Scissors") playerNum = 2;

    if (playerNum == randomNum) std::cout << "We tied, try again!" << std::endl;
    else if ((playerNum == 1 && randomNum == 3) || // Rock beats Scissors
                 (playerNum == 2 && randomNum == 1) || // Paper beats Rock
                 (playerNum == 3 && randomNum == 2))   // Scissors beats Paper
    {
        std::cout << "You win!" << std::endl;
    }
    else
    {
        std::cout << "You lose! Try again." << std::endl;
    }

    return 0;
    }