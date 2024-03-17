#include <iostream>
#include <ctime>

std::string computer(int tempVar);
bool checkWinner(std::string playerChoice, std::string computerChoice);
bool checkTie(std::string playerChoice, std::string computerChoice);

int main()
{
  srand(time(0));
  std::string playerChoice;
  std::string computerChoice;

  bool running = true;
  while (running)
  {
    int tempVar = (rand() % 3) + 1;
    std::cout << "Enter your choice: \n";
    std::getline(std::cin, playerChoice);
    computerChoice = computer(tempVar);
    std::cout << "You chose: " << playerChoice << "\n";
    std::cout << "The computer chose: " << computerChoice << "\n";
    if (checkWinner(playerChoice, computerChoice))
    {
      std::cout << "You win! \n";
      running = false;
    }
    else if (checkTie(playerChoice, computerChoice))
    {
      std::cout << "It was a draw. go again!\n";
    }
    else
    {
      std::cout << "You lost :( \n";
      running = false;
    }
  }
  return 0;
}

std::string computer(int tempVar)
{
  switch (tempVar)
  {
  case 1:
    return "paper";
  case 2:
    return "scissors";
  case 3:
    return "rock";
  }
  return "";
}
bool checkWinner(std::string playerChoice, std::string computerChoice)
{
  if (playerChoice == "rock" && computerChoice == "paper")
  {
    return false;
  }
  else if (playerChoice == "rock" && computerChoice == "scissors")
  {

    return true;
  }

  else if (playerChoice == "paper" && computerChoice == "scissors")
  {

    return false;
  }

  else if (playerChoice == "paper" && computerChoice == "rock")
  {

    return true;
  }
  else if (playerChoice == "scissors" && computerChoice == "paper")
  {

    return true;
  }
  else if (playerChoice == "scissors" && computerChoice == "rock")
  {

    return false;
  }
}
bool checkTie(std::string playerChoice, std::string computerChoice)
{
  if (playerChoice == "paper" && computerChoice == "paper")
  {

    return true;
  }
  else if (playerChoice == "rock" && computerChoice == "rock")
  {

    return true;
  }
  else if (playerChoice == "scissors" && computerChoice == "scissors")
  {

    return true;
  }
}
