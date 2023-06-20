#include <iostream>

double calculateAverage(int* array, int size) {
    // Проверка на нулевой размер массива
    if (size == 0) {
        return 0.0;
    }

    int sum = 0;

    // Обходим все элементы массива
    for (int i = 0; i < size; ++i) {
        // Получаем указатель на текущий элемент
        int* currentElement = array + i;

        // Добавляем значение текущего элемента к сумме
        sum += *currentElement;
    }

    // Вычисляем среднее арифметическое
    double average = static_cast<double>(sum) / size;

    return average;
}

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    // Создаем динамический массив
    int* array = new int[size];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    // Вызываем функцию для расчета среднего арифметического
    double average = calculateAverage(array, size);

    std::cout << "Среднее арифметическое: " << average << std::endl;

    // Освобождаем память, выделенную для массива
    delete[] array;

    return 0;
}