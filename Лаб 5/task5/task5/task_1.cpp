#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator; // числитель
    int denominator; // знаменатель
public:
    Fraction(int n, int d) { // конструктор
        numerator = n;
        denominator = d;
    }
    Fraction() { // конструктор по умолчанию
        numerator = 0;
        denominator = 1;
    }
    void reduce() { // метод для сокращения дроби до несократимого вида
        int gcd = 1;
        for (int i = 1; i <= numerator && i <= denominator; i++) {
            if (numerator % i == 0 && denominator % i == 0) {
                gcd = i;
            }
        }
        numerator /= gcd;
        denominator /= gcd;
    }
    Fraction operator+(Fraction f) { // метод для сложения дробей
        int n = numerator * f.denominator + f.numerator * denominator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator-(Fraction f) { // метод для вычитания дробей
        int n = numerator * f.denominator - f.numerator * denominator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator*(Fraction f) { // метод для умножения дробей
        int n = numerator * f.numerator;
        int d = denominator * f.denominator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    Fraction operator/(Fraction f) { // метод для деления дробей
        int n = numerator * f.denominator;
        int d = denominator * f.numerator;
        Fraction result(n, d);
        result.reduce();
        return result;
    }
    void print() { // метод для вывода дроби на экран
        cout << numerator << "/" << denominator << endl;
    }
};
/*
int main() {
    Fraction f1(2, 3);
    Fraction f2(3, 4);

    cout << "f1 + f2 = ";
    (f1 + f2).print();

    cout << "f1 - f2 = ";
    (f1 - f2).print();

    cout << "f1 * f2 = ";
    (f1 * f2).print();

    cout << "f1 / f2 = ";
    (f1 / f2).print();

}*/