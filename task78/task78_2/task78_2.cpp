#include <iostream>
#include <thread>

using namespace std;
// Функция, которая будет выполняться в потоке
void calculateSquare(int number) {
    int square = number * number;
    cout << "Квадрат числа " << number << ": " << square << endl;
}

int main() {
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    // Создание потока и передача ему функции calculateSquare
    thread thread(calculateSquare, number);

    // Ожидание завершения работы потока
    thread.join();

    return 0;
}