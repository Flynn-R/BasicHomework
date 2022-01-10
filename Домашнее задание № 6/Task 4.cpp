#include <iostream>
#include <fstream>
#include <string>

void cat()
{
	std::cout << "Enter the first file name: ";
	std::string path1;
	std::cin >> path1;
	std::ifstream file1(path1);
	if (file1.is_open())
	{
		std::cout << "Enter the second file name: ";
		std::string path2;
		std::cin >> path2;
		std::ifstream file2(path2);
		if (file2.is_open())
		{
			std::cout << "Enter a new file name: ";
			std::string path;
			std::cin >> path;
			std::ofstream file3(path + ".txt");
			std::cout << "\n";
			if (file3.is_open())
			{
				std::string buf;
				while (!file1.eof())
				{
					getline(file1, buf);
					file3 << buf;
				}
				file1.close();
				while (!file2.eof())
				{
					getline(file2, buf);
					file3 << buf;
				}
				file2.close();
				file3.close();
			}
			else
			{
				std::cerr << "Error\n";
			}
		}
		else
		{
			std::cerr << "Error\n";
		}
	}
	else
	{
		std::cerr << "Error\n";
	}
}