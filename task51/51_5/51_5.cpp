#include <iostream>

// Функция для поиска максимального элемента в матрице
int findMaxElement(int* matrix, int rows, int columns) {
    // Инициализируем максимальный элемент первым элементом матрицы
    int maxElement = *matrix;

    // Обходим все элементы матрицы
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            // Получаем указатель на текущий элемент
            int* currentElement = matrix + i * columns + j;

            // Сравниваем текущий элемент с максимальным элементом
            if (*currentElement > maxElement) {
                maxElement = *currentElement;
            }
        }
    }

    return maxElement;
}

int main() {
    const int rows = 3;
    const int columns = 3;
    int matrix[rows][columns] = {
        {5, 8, 2},
        {3, 1, 9},
        {4, 7, 6}
    };

    // Получаем указатель на первый элемент матрицы
    int* matrixPtr = &matrix[0][0];

    // Находим максимальный элемент
    int maxElement = findMaxElement(matrixPtr, rows, columns);

    std::cout << "Максимальный элемент в матрице: " << maxElement << std::endl;

    return 0;
}