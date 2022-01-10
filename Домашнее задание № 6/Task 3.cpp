#include <iostream>
#include <fstream>
#include <cstdlib>

void createFile()
{
	std::cout << "Enter the first file name: ";
	std::string path1;
	std::cin >> path1;
	std::ofstream file1(path1 + ".txt");
	std::cout << "Enter the second file name: ";
	std::string path2;
	std::cin >> path2;
	std::cout << "\n";
	std::ofstream file2(path2 + ".txt");

	if (file1.is_open() && file2.is_open())
	{
		unsigned short N1 = (rand() % 51) + 51;
		unsigned short N2 = (rand() % 51) + 51;
		char* buf1 = new (std::nothrow) char[N1];
		char* buf2 = new (std::nothrow) char[N2];
		if (buf1 != nullptr && buf2 != nullptr)
		{
			for (size_t i = 0; i < N1; i++)
			{
				if (i == N1 - 1)
				{
					buf1[i] = '\0';
				}
				else
				{
					buf1[i] = (rand() % 95) + 32;
				}
			}
			for (size_t i = 0; i < N2; i++)
			{
				if (i == N2 - 1)
				{
					buf2[i] = '\0';
				}
				else
				{
					buf2[i] = (rand() % 95) + 32;
				}
			}

			file1 << buf1;
			file1.close();
			file2 << buf2;
			file2.close();
			delete[] buf1;
			delete[] buf2;
			buf1 = nullptr;
			buf2 = nullptr;
		}
		else
		{
			std::cerr << "Error\n\n";
		}
	}
	else
	{
		std::cerr << "Error\n";
	}
}