#include <iostream>

int countUniqueElements(int* array, int size) {
    // Проверка на нулевой размер массива
    if (size == 0) {
        return 0;
    }

    int uniqueCount = 0;

    // Создаем динамический массив для хранения уникальных элементов
    int* uniqueArray = new int[size];

    // Обходим все элементы массива
    for (int i = 0; i < size; ++i) {
        // Получаем указатель на текущий элемент
        int* currentElement = array + i;

        bool isUnique = true;

        // Проверяем, есть ли текущий элемент в уникальном массиве
        for (int j = 0; j < uniqueCount; ++j) {
            // Получаем указатель на текущий уникальный элемент
            int* uniqueElement = uniqueArray + j;

            // Сравниваем значения текущего элемента и текущего уникального элемента
            if (*currentElement == *uniqueElement) {
                isUnique = false;
                break;
            }
        }

        // Если текущий элемент уникален, добавляем его в уникальный массив
        if (isUnique) {
            uniqueArray[uniqueCount] = *currentElement;
            uniqueCount++;
        }
    }

    // Освобождаем память, выделенную для уникального массива
    delete[] uniqueArray;

    return uniqueCount;
}

int main() {
    const int size = 10;
    int array[size] = { 1, 2, 3, 4, 5, 2, 3, 4, 6, 7 };

    // Получаем указатель на первый элемент массива
    int* arrayPtr = &array[0];

    // Находим количество уникальных элементов
    int uniqueCount = countUniqueElements(arrayPtr, size);

    std::cout << "Количество уникальных элементов: " << uniqueCount << std::endl;

    return 0;
}