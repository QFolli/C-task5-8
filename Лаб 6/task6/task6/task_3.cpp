#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   //Задание 1
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Введите элементы массива: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    delete[] arr;


	  //Задание 2
    int temp;
    vector<int> v;
    cout << "\nВведите количество элементов в векторе: ";
    cin >> n;
    cout << "Введите элементы вектора: \n";
    for (int i = 0; i < n; i++) 
    {
        cin >> temp;
        v.push_back(temp);
    }

    int count = std::count_if(v.begin(), v.end(), [](int i) {return i > 5; });
    cout << "Количество элементов, больших 5: " << count << endl;

}