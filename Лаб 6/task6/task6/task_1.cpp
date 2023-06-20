#include <iostream>
#include <vector>
using namespace std;
#pragma warning(disable : 4996);

int main() {
	  //Задание 1
    setlocale(LC_ALL, "Russian");
    vector<int> vector1(5); 

    for (int i = 0; i < 5; ++i) {
        cout << "Введите число " << i + 1 << ": ";
        cin >> vector1[i];
    }

    int sum = 0;
    for (int number : vector1) {
        sum += number;
    }

    cout << "Сумма всех чисел: " << sum << endl;

	  //Задание 2
    int n;
    cout << "Введите количество элементов в векторе: ";
    cin >> n;

    vector<int> vector2(n);
    cout << "Введите элементы вектора:\n";
    for (int i = 0; i < n; ++i) 
    {
        cin >> vector2[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (vector2[i] > vector2[j]) {
                swap(vector2[i], vector2[j]);
            }
        }
    }

    cout << "Отсортированный вектор: ";
    for (int i = 0; i < n; ++i) {
        cout << vector2[i] << " ";
    }
}