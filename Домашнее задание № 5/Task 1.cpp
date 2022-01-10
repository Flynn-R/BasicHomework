#include <iostream>

namespace MyHomework
{
	extern void task_1(double* arr, const size_t n)
	{
		for (size_t i = 0; i < n; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
	}
}