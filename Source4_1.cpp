#include<iostream>

int main()
{
	int number{};
	do
	{
		std::cout << "Enter integer number or enter 0 for end: ";
		std::cin >> number;
	} while (number != 0);

	return 0;
}