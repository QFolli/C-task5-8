#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand; // марка
    string model; // модель
    int year; // год выпуска
    string engine_type; // тип двигателя
    double fuel_amount; // количество топлива в баке

    void setBrand(string brand) { // метод для изменения марки
        this->brand = brand;
    }

    void setModel(string model) { // метод для изменения модели
        this->model = model;
    }

    void setYear(int year) { // метод для изменения года выпуска
        this->year = year;
    }

    void setEngineType(string engine_type) { // метод для изменения типа двигателя
        this->engine_type = engine_type;
    }

    void setFuelAmount(double fuel_amount) { // метод для изменения количества топлива в баке
        this->fuel_amount = fuel_amount;
    }

    void refuel(double fuel_amount) { // метод для заправки автомобиля топливом
        this->fuel_amount += fuel_amount;
    }

    void move(double distance) { // метод для перемещения автомобиля на заданное расстояние
        double fuel_consumption = distance / 10.0; // предполагая 10 км на литр
        if (fuel_consumption > fuel_amount) {
            cout << "Недостаточно топлива для перемещения автомобиля!" << endl;
            return;
        }
        fuel_amount -= fuel_consumption;
        cout << "Автомобиль перемещен на " << distance << " км." << endl;
    }
};
/*
int main() {
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2016);
    myCar.setEngineType("Бензин");
    myCar.setFuelAmount(50.0);

    cout << "Начальные значения:" << endl;
    cout << "Марка: " << myCar.brand << endl;
    cout << "Модель: " << myCar.model << endl;
    cout << "Год выпуска: " << myCar.year << endl;
    cout << "Тип двигателя: " << myCar.engine_type << endl;
    cout << "Количество топлива в баке: " << myCar.fuel_amount << endl;

    myCar.refuel(20.0);
    cout << "\nПосле заправки:" << endl;
    cout << "Количество топлива в баке: " << myCar.fuel_amount << endl;

    myCar.move(100.0);
    cout << "\nПосле перемещения:" << endl;
    cout << "Количество топлива в баке: " << myCar.fuel_amount << endl;

}*/