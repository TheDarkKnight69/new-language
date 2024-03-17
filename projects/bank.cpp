// Bank Balance..Program
// Supports
//>Withdrawing
//>Depositing
// Checking Balance

#include <iostream>
#include <iomanip>
double balance = 0;

void Deposit()
{
	double amount;
	std::cout << "How much do you want to deposit in your account? " << '\n';
	std::cin >> amount;
	balance += amount;
	std::cout << std::fixed;
	std::cout << "Your current balance is $" << std::setprecision(2) << balance << '\n';
}

void Withdraw()
{
	double amount;
	std::cout << "How much do you want to withdraw from your account? " << '\n';
	std::cin >> amount;
	if (balance > amount)
	{
		balance -= amount;
		std::cout << std::fixed;
		std::cout << "Your current balance is $" << std::setprecision(2) << balance << '\n';
	}
	else
	{
		std::cout << "You do not have sufficient funds. \n";
	}
}

void showBalance()
{
	std::cout << std::fixed;
	std::cout << "Your current balance is $" << std::setprecision(2) << balance << '\n';
}

void showMenu()
{
	std::cout << "\n1) Withdraw.\n";
	std::cout << "2) Deposit.\n";
	std::cout << "3) Show Balance.\n";
	std::cout << "4) Show this menu again!.\n";
	std::cout << "5) Logout and Exit.\n";
	std::cout << "\n\nUse the number of the choice!\n\n";
}

int main()
{
	int choice = 0;
	std::cout << "--------Welcome to your Bank----------";
	do
	{
		showMenu();

		std::cin >> choice;
		switch (choice)
		{
		case 1:
			Withdraw();
			break;
		case 2:
			Deposit();
			break;
		case 3:
			showBalance();
			break;
		case 4:
			showMenu();
			break;
		case 5:
			std::cout << "Thank you for using our services!!\n\n";
			break;
		default:
			std::cout << "That was an invalid input!\n";
		}
	} while (choice != 5);
	return 0;
}
