#pragma once

#include <iostream>
#include <fstream>

#define ARR_SIZE 10

// Для задания 2
#define CHECK(a, b) ((a >= 0 && a < b) ? "true" : "false")

// Для задания 3
#define SWAP(a, b) int temp = a; a = b; b = temp;

// Для задания 1
namespace funcsTask1
{
    void initArray(float* array, unsigned SIZE);
    void printArray(const float* array, unsigned SIZE);
    void countArray(const float* array, unsigned SIZE);
}

// Для задания 3
namespace funcsTask3
{
    void input(int* array, unsigned SIZE);
    void sortBubble(int* array, unsigned SIZE);
    void output(const int*array, unsigned SIZE);
}

// Для задания 4
namespace funcsAndStructTask4
{
#pragma pack(push, 1)
    struct Employee
    {
        unsigned id;
        float salary;
        std::string department;
    };
#pragma pack(pop)

    void init(Employee* someGuy);
    void printOnScreen(const Employee* someGuy);
    void printInFile(const Employee* someGuy);
}
