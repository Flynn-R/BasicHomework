#include <iostream>
#include <fstream>
#include <string>

void find()
{
	std::cout << "Which word do you want to find?\n";
	std::string word;
	std::cin >> word;
	std::cout << "In which file do you want to find it?\n";
	std::string path;
	std::cin >> path;
	std::ifstream file(path);
	if (file.is_open())
	{
		std::string buf;
		while (!file.eof())
		{
			getline(file, buf);
			if (buf.find(word) != std::string::npos)
			{
				std::cout << "We found it!\n";
			}
			else
			{
				std::cout << "We didn't find it!\n";
			}
		}
		file.close();
	}
	else
	{
		std::cerr << "Error\n";
	}
}