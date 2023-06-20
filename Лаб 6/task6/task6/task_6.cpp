#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    //Задание 1
    setlocale(LC_ALL, "Russian");
    double radius;
    cout << "Введите радиус окружности: ";
    cin >> radius;
    double length = 2 * acos(-1) * radius;
    double area = acos(-1) * pow(radius, 2);
    cout << "Длина окружности: " << length << endl;
    cout << "Площадь окружности: " << area << endl;

    //Задание 2
    double num1, num2;
    double average;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    average = (num1 + num2) / 2;

    cout << "Среднее арифметическое равно: " << average << endl;
}