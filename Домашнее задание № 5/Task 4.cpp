#include <iostream>

namespace MyHomework
{
	extern void task_4(char* arr, int n, const size_t SIZE)
	{
		for (size_t i = 0; i < SIZE; i++)
		{
			std::cout << arr[(i - n) % SIZE] << " ";
		}
		std::cout << "\n";
	}
}