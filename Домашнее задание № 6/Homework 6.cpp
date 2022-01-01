#include <iostream>

// Task 1
int* arrayInit1();
void arrayFill(int*);
void arrayOutput(const int*);

// Task 2
int** arrayInit2();
void arrayFill(int**);
void arrayOutput(int**);
void arrayClear(int**);

// Task 3
void createFile();

// Task 4
void cat();

// Task 5
void find();

int main()
{
    // Задание 1
    int* ptr = arrayInit1();
    if (ptr != nullptr)
    {
        arrayFill(ptr);
        arrayOutput(ptr);
        delete[] ptr;
        ptr = nullptr;
    }
    else
    {
        std::cerr << "Error\n\n";
    }

    // Задание 2
    int** pPtr = arrayInit2();
    if (pPtr != nullptr)
    {
        arrayFill(pPtr);
        arrayOutput(pPtr);
        arrayClear(pPtr);
    }
    else
    {
        std::cerr << "Error\n\n";
    }

    // Задание 3
    createFile();

    // Задание 4
    cat();

    // Задание 5
    find();
}