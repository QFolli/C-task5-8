#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>

using namespace std;
void generate_number(int& result) {
    // Генерируем случайное число от 1 до 10
    result = rand() % 10 + 1;
}

void find_max(int* arr, int size, int& result) {
    // Находим максимальное число в массиве
    int max_num = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    result = max_num;
}

void find_min(int* arr, int size, int& result) {
    // Находим минимальное число в массиве
    int min_num = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_num) {
            min_num = arr[i];
        }
    }
    result = min_num;
}

void find_mean(int* arr, int size, double& result) {
    // Находим среднее арифметическое чисел в массиве
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    result = static_cast<double>(sum) / size;
}

int main() {
    const int size = 10;
    int arr[size];

    // Инициализируем генератор случайных чисел
    srand(static_cast<unsigned int>(time(nullptr)));

    // Создаем три переменные для результатов
    int max_num = 0;
    int min_num = 0;
    double mean_num = 0;

    // Создаем три потока
    thread t1(generate_number, ref(arr[0]));
    thread t2(generate_number, ref(arr[1]));
    thread t3(generate_number, ref(arr[2]));

    // Ожидаем завершение выполнения всех потоков
    t1.join();
    t2.join();
    t3.join();

    // Вычисляем максимум, минимум и среднее арифметическое
    find_max(arr, size, max_num);
    find_min(arr, size, min_num);
    find_mean(arr, size, mean_num);

    // Выводим результаты на экран
    cout << "Maximum number: " << max_num << endl;
    cout << "Minimum number: " << min_num << endl;
    cout << "Mean number: " << mean_num << endl;

    return 0;
}