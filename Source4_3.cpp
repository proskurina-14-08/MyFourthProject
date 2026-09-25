#include<iostream>

int main()
{
	int number{};

	std::cout << "Enter integer number: ";
	std::cin >> number;
	std::cout << std::endl << "Multiplication table: " << std::endl;	
	for (int x = 1; x <= 10; x++)
	{
		std::cout << number << " x " << x << " = " << number*x << "\n";
	}
	return 0;
}