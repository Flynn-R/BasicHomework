#include <iostream>
#include <cstdarg>

namespace MyHomework
{
	extern void task_2(unsigned short* arr, ...)
	{
		std::va_list arguments;
		va_start(arguments, arr);
		const unsigned int n = va_arg(arguments, const size_t);

		for (size_t i = 0; i < n; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";

		for (size_t i = 0; i < n; i++)
		{
			std::cout << !arr[i] << " ";
		}
		std::cout << "\n";

		va_end(arguments);
	}
}