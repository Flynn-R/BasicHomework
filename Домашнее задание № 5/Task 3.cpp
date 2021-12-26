#include <iostream>

namespace MyHomework
{
	extern void task_3(int* arr, const size_t n)
	{
		arr[0] = 1;
		std::cout << arr[0];
		
		for (size_t i = 1; i < n; i++)
		{
			arr[i] = arr[i - 1] + 3;
			std::cout << " " << arr[i];
		}
		std::cout << "\n";
	}
}