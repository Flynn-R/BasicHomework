// Я решил выполнить задания как на сайте gb.ru в разделе "Практическое задание", так и задания из методички к пятому уроку
// Прошу прощения, если осложнил проверку домашнего задания

// Написать все функции в отдельных файлах в одном пространстве имён, вызвать их на исполнение в основном файле программы, используя указатели на функции.

#include <iostream>

#define ARR_SIZE 8

namespace MyHomework
{
    void (*Task1)(double*, const size_t);
    extern void task_1(double*, const size_t);

    void (*Task2)(unsigned short*, ...);
    extern void task_2(unsigned short *, ...);

    void (*Task3)(int*, const size_t);
    extern void task_3(int*, const size_t);

    void (*Task4)(char*, int, const size_t);
    extern void task_4(char*, int, const size_t);

    bool (*Task5)(int*, const size_t);
    extern bool task_5(int*, const size_t);
}

using namespace MyHomework;

int main()
{
    // Задание 1
    // Написать функцию, которая выводит массив double на экран.
    // Параметры - это сам массив и его размер.
    // Вызвать эту функцию из main.
    {
        std::cout << "Task 1\n";
        Task1 = task_1;
        double arr[ARR_SIZE] = { 4.4, 2.2, 5.5, 1.1, 7.7, 0.0, 9.9, 6.6 };
        Task1(arr, ARR_SIZE);
        std::cout << "\n";
    }

    // Задание 2
    // Задать целочисленный массив, состоящий из элементов 0 и 1.
    // Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0.
    // Выводить на экран массив до изменений и после.
    // Написать её так, чтобы она работала с аргументом переменной длины.
    {
        std::cout << "Task 2\n";
        Task2 = task_2;
        unsigned short arr[ARR_SIZE] = { 0, 1, 1, 0, 0, 0, 1, 1 };
        Task2(arr, ARR_SIZE);
        std::cout << "\n";
    }

    // Задание 3
    // Задать пустой целочисленный массив размером 8.
    // Написать функцию, которая с помощью цикла заполнит его значениями 1, 4, 7, 10, 13, 16, 19, 22.
    // Вывести массив на экран.
    {
        std::cout << "Task 3\n";
        Task3 = task_3;
        int arr[ARR_SIZE];
        Task3(arr, ARR_SIZE);
        std::cout << "\n";
    }

    // Задание 4
    // Написать функцию, которой на вход подаётся одномерный массив и число n (может быть положительным или отрицательным),
    // при этом метод должен циклически сместить все элементы массива на n позиций.
    {
        std::cout << "Task 4\nEnter n: ";
        Task4 = task_4;
        char arr[ARR_SIZE] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
        int n;
        std::cin >> n;
        Task4(arr, n, ARR_SIZE);
        std::cout << "\n";
    }

    // Задание 5
    // Написать функцию, которой передаётся не пустой одномерный целочисленный массив;
    // она должна вернуть истину, если в массиве есть место, в котором сумма левой и правой части массива равны.
    {
        std::cout << "Task 5\n";
        Task5 = task_5;
        int arr[ARR_SIZE] = { 4, 4, 2, -1, 1, 1, 1, 2 };
        std::cout << (Task5(arr, ARR_SIZE) ? "True\n" : "False\n");
    }
}