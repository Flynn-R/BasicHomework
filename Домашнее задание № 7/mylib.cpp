#include <ctime>
#include "mylib.h"

namespace funcsTask1
{
    void initArray(float* array, const unsigned SIZE)
    {
        srand(time(nullptr));

        for (size_t i = 0; i < SIZE; ++i)
        {
            // Инициализация массива значениями от -100 до 100
            array[i] = static_cast<float>(rand() % 201 - 100);
        }
    }

    void printArray(const float* array, const unsigned SIZE)
    {
        for (size_t i = 0; i < SIZE; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
    }

    void countArray(const float* array, const unsigned SIZE)
    {
        size_t countPos = 0, countNeg = 0;

        for (size_t i = 0; i < SIZE; ++i)
        {
            if (array[i] > 0)
            {
                countPos++;
            }
            else if(array[i] < 0)
            {
                countNeg++;
            }
        }

        std::cout << "Number of positive elements: " << countPos << "\n";
        std::cout << "Number of negative elements: " << countNeg << "\n\n";
    }
}

namespace funcsTask3
{
    void input(int* array, const unsigned SIZE)
    {
        for (size_t i = 0; i < SIZE; ++i)
        {
            std::cin >> array[i];
        }

        std::cout << "Array before sorting: ";
        for (size_t i = 0; i < SIZE; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << "\n";
    }

    // Сортировка по возрастанию
    void sortBubble(int* array, const unsigned SIZE)
    {
        for (size_t i = 0; i < SIZE; ++i)
        {
            for (size_t j = 0; j < SIZE - 1; ++j)
            {
                if (array[j] > array[j + 1])
                {
                    SWAP(array[j], array[j + 1])
                }
            }
        }
    }

    void output(const int* array, const unsigned SIZE)
    {
        std::cout << "Array after sorting: ";
        for (size_t i = 0; i < SIZE; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << "\n\n";
    }
}

namespace funcsAndStructTask4
{
    void init(Employee* someGuy)
    {
        someGuy->id = 0;
        someGuy->salary = 15000.55f; // Странные дела: записывается как 1500.5. Особенности компилятора?
        someGuy->department = "HQ";
    }

    void printOnScreen(const Employee* someGuy)
    {
        std::cout << "Employee's ID: " << someGuy->id << "\n";
        std::cout << "Employee's salary: " << someGuy->salary << "\n";
        std::cout << "Employee's department: " << someGuy->department << "\n";
        std::cout << "Struct size: " << sizeof(Employee) << "\n\n";
    }

    void printInFile(const Employee* someGuy)
    {
        std::ofstream file("Director.txt");
        if (file.is_open())
        {
            file << "Director's ID: " << someGuy->id << "\n";
            file << "Director's salary: " << someGuy->salary << "\n";
            file << "Director's department: " << someGuy->department << "\n";
            file.close();
        }
        else
        {
            std::cerr << "Ooopsy, cannot open file :(\n\n";
        }
    }
}