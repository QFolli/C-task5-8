#include <iostream>
using namespace std;

// Базовый класс "Геометрическая фигура"
class GeometricFigure {
public:
    // Виртуальные методы для вычисления периметра и площади фигуры
    virtual double Perimeter() = 0;
    virtual double Area() = 0;
};

// Подкласс "Круг"
class Circle : public GeometricFigure {
public:
    // Конструктор класса
    Circle(double r) : radius(r) {}

    // Методы для вычисления периметра и площади круга
    double Perimeter() override {
        return 2 * 3.14 * radius;
    }
    double Area() override {
        return 3.14 * radius * radius;
    }

private:
    double radius; // Радиус круга
};

// Подкласс "Прямоугольник"
class Rectangle : public GeometricFigure {
public:
    // Конструктор класса
    Rectangle(double w, double h) : width(w), height(h) {}

    // Методы для вычисления периметра и площади прямоугольника
    double Perimeter() override {
        return 2 * (width + height);
    }
    double Area() override {
        return width * height;
    }

private:
    double width;  // Ширина прямоугольника
    double height; // Высота прямоугольника
};

// Подкласс "Треугольник"
class Triangle : public GeometricFigure {
public:
    // Конструктор класса
    Triangle(double a, double b, double c) : sideA(a), sideB(b), sideC(c) {}

    // Методы для вычисления периметра и площади треугольника
    double Perimeter() override {
        return sideA + sideB + sideC;
    }
    double Area() override {
        double p = (sideA + sideB + sideC) / 2;
        return sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
    }

private:
    double sideA; // Длина стороны A треугольника
    double sideB; // Длина стороны B треугольника
    double sideC; // Длина стороны C треугольника
};
/*
int main() {
    // Создание объектов классов "Круг", "Прямоугольник" и "Треугольник"
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    // Вызов методов для вычисления периметра и площади фигур
    cout << "Периметр круга: " << circle.Perimeter() << endl;
    cout << "Площадь круга: " << circle.Area() << endl;

    cout << "Периметр прямоугольника: " << rectangle.Perimeter() << endl;
    cout << "Площадь прямоугольника: " << rectangle.Area() << endl;

    cout << "Периметр треугольника: " << triangle.Perimeter() << endl;
    cout << "Площадь треугольника: " << triangle.Area() << endl;

}*/