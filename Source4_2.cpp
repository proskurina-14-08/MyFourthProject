#include<iostream>

int main()
{
	int number{};
	int summ{0};
	int figure{};

	std::cout << "Enter integer number: ";
	std::cin >> number;
		while (number > 0)
	{
		figure = number % 10;
		summ += figure;
		number /= 10;
	}
	std::cout << std::endl << "Summ of figures: " << summ;
	return 0;
}