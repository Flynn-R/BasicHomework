#include <cmath>
#include <iostream>

size_t SIZE;

int* arrayInit1()
{
	std::cout << "Enter the size of the array: "; 
	std::cin >> SIZE;
	int* ptr = new (std::nothrow) int[SIZE];
	return ptr;
}

void arrayFill(int* arr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = pow(2, i);
	}
}

void arrayOutput(const int* arr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";
}