#include <iostream>
#include <thread>

using namespace std;

// Функция, которая будет выполняться в потоке
void sumNumbers(int a, int b)
{
    int sum = a + b;
    cout << "Сумма чисел " << a << " и " << b << " равна: " << sum << endl;
}

int main()
{
    // Создаем два потока и передаем им функцию sumNumbers
    thread t1(sumNumbers, 10, 20);
    thread t2(sumNumbers, 5, 7);

    // Ждем, пока оба потока закончат свою работу
    t1.join();
    t2.join();

    return 0;
}