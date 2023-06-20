#include <iostream>

int findGCD(int* a, int* b)
{
    while (*b != 0)
    {
        int temp = *a;
        *a = *b;
        *b = temp % *b;
    }
    return *a;
}

int main()
{
    int num1, num2;
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    int gcd = findGCD(&num1, &num2);

    std::cout << "Наибольший общий делитель: " << gcd << std::endl;

    return 0;
}