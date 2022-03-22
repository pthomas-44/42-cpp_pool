#include <cstdlib>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int		main( void )
{
	std::cout << "Creating an class Array instance and a Int array" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];

	std::cout << "Filling them with the same values" << std::endl;
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "Testing deep copy (work if no segfault)" << std::endl;
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	std::cout << "Testing Values" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cout << "Values don't match!" << std::endl;
			return 1;
		}
	}
	std::cout << "Values all match!" << std::endl;
	std::cout << "Testing wrong index in operator[]" << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "Testing good index in operator[]" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}
