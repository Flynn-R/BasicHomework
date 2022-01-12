#include "mylib.h"

using namespace std;

int main()
{
    // Задание 1 и 5
    {
        cout << "Task 1\n";
        float array[ARR_SIZE];
        funcsTask1::initArray(array, ARR_SIZE);
        funcsTask1::printArray(array, ARR_SIZE);
        funcsTask1::countArray(array, ARR_SIZE);
    }

    // Задание 2
    {
        int a;
        cout << "Task 2\nEnter a number: ";
        cin >> a;
        cout << CHECK(a) << "\n\n"; // CHECK(a) определена в mllib.h
    }

    // Задание 3
    {
        cout << "Task 3\nFill the array: ";
        int array[ARR_SIZE];
        funcsTask3::input(array, ARR_SIZE);
        funcsTask3::sortBubble(array, ARR_SIZE);
        funcsTask3::output(array, ARR_SIZE);
    }

    // Задание 4
    {
        cout << "Task 4\n";
        auto* director = new (nothrow) funcsAndStructTask4::Employee;
        if (director != nullptr)
        {
            funcsAndStructTask4::init(director);
            funcsAndStructTask4::printOnScreen(director);
            funcsAndStructTask4::printInFile(director);
            delete director;
        }
        else
        {
            cerr << "Sorry, bad memory allocation :(\n\n";
        }
    }
}