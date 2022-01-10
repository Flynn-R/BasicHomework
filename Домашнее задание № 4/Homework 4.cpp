#include <iostream>

int main()
{
    //Задание 1
    {
        int a, b;
        std::cout << "Enter the first number: ";
        std::cin >> a;
        std::cout << "Enter the second number: ";
        std::cin >> b;

        int c = a + b;
        if (c >= 10 && c <= 20)
        {
            std::cout << "true\n";
        }
        else
        {
            std::cout << "false\n";
        }

        //Еще один вариант покороче:
        // std::cout << ((c >= 10 && c <= 20) ? "true\n" : "false\n");
    }

    //Задание 2
    {
        const int a = 10, b = 30;

        if (a == 10 && b == 10 || a + b == 10)
        {
            std::cout << "true\n";
        }
        else
        {
            std::cout << "false\n";
        }

        //Еще один вариант покороче:
        // std::cout << ((a == 10 && b == 10 || a + b == 10) ? "true\n" : "false\n");
    }

    //Задание 3
    {
        std::cout << "Your numbers are: ";
        for (size_t i = 1; i < 50; i += 2)
        {
            std::cout << i << " ";
        }

        //Еще один вариант с циклом while:
        //size_t i = 1;
        //while (i < 50)
        //{
        //    std::cout << i << " ";
        //    i += 2;
        //}
    }

    //Задание 4
    {
        size_t number;

        std::cout << "Enter a number: ";
        std::cin >> number;

        switch (number) //Для проверки на случай, если введены 1, 2 или 3, так как для увеличения эффективности программы рассматриваются первые n / 2 чисел
        {
        case 1:
            std::cout << "1 is neither prime or composite number\n";
            break;
        case 2:
            std::cout << "2 is prime number\n";
            break;
        case 3:
            std::cout << "3 is prime number\n";
            break;
        default:
            for (size_t i = 2; i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    std::cout << "The number you entered is not prime number\n";
                    break;
                }
                else
                {
                    if (i == number / 2)
                    {
                        std::cout << "The number you entered is prime number\n";
                    }
                }
            }
        }
    }

    //Задание 5
    {
        short int year;
        std::cout << "Enter the year (from 1 to 3000): ";
        std::cin >> year;

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            std::cout << "This year is a leap year\n";
        }
        else
        {
            std::cout << "This year is not a leap year\n";
        }

        //Еще один вариант покороче:
        // std::cout << ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "This year is a leap year\n" : "This year is not a leap year\n");
    }
}