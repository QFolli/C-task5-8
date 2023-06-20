#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt"); // Открываем файл для чтения

    if (!inputFile.is_open()) {
        std::cout << "Не удалось открыть файл." << std::endl;
        return 1;
    }

    inputFile.seekg(0, std::ios::end); // Перемещаем указатель чтения в конец файла

    std::streampos fileSize = inputFile.tellg(); // Получаем размер файла

    // Создаем буфер для хранения содержимого файла
    char* buffer = new char[fileSize];

    inputFile.seekg(0, std::ios::beg); // Перемещаем указатель чтения в начало файла
    inputFile.read(buffer, fileSize); // Считываем содержимое файла в буфер

    inputFile.close(); // Закрываем файл

    // Выводим содержимое файла в обратном порядке
    for (int i = fileSize - 1; i >= 0; --i) {
        std::cout << buffer[i];
    }

    delete[] buffer; // Освобождаем память, выделенную для буфера

    return 0;
}