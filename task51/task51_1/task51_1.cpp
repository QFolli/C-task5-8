#include <iostream>

void findTwoSmallest(int* arr, int size, int& smallest1, int& smallest2) {
    if (size < 2) {
        std::cout << "Массив должен содержать как минимум два элемента." << std::endl;
        return;
    }

    int* ptr1 = arr;  // Указатель на первый элемент массива
    int* ptr2 = arr + 1;  // Указатель на второй элемент массива

    // Находим два наименьших числа в массиве
    if (*ptr1 > *ptr2) {
        std::swap(ptr1, ptr2);
    }

    for (int i = 2; i < size; ++i) {
        if (arr[i] < *ptr1) {
            ptr2 = ptr1;
            ptr1 = arr + i;
        }
        else if (arr[i] < *ptr2) {
            ptr2 = arr + i;
        }
    }

    smallest1 = *ptr1;
    smallest2 = *ptr2;
}

int main() {
    int arr[] = { 10, 5, 7, 2, 8, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest1, smallest2;
    findTwoSmallest(arr, size, smallest1, smallest2);

    std::cout << "Наименьшие числа в массиве: " << smallest1 << " и " << smallest2 << std::endl;

    return 0;
}