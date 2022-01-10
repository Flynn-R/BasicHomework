#include <iostream>
#include <cstdlib>
#define SIZE 4

int** arrayInit2()
{
	std::cout << "Array 4x4:\n";
	int** pPtr = new int* [SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		pPtr[i] = new int[SIZE];
	}
	return pPtr;
}

void arrayFill(int** pPtr)
{
	srand(time(NULL));
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			pPtr[i][j] = rand();
		}
	}
}

void arrayOutput(int** pPtr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			std::cout << pPtr[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
}

void arrayClear(int** pPtr)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		delete[] pPtr[i];
	}
	delete[] pPtr;
	pPtr = nullptr;
}