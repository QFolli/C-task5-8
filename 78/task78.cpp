#include <iostream>
#include <thread>

using namespace std;
// Функция, которая будет выполняться в каждом потоке
void printHello() {
    cout << "Hello, world!" << endl;
}

int main() {
    // Создание двух потоков
    thread thread1(printHello);
    thread thread2(printHello);

    // Ожидание завершения работы потоков
    thread1.join();
    thread2.join();

    return 0;
}