#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    //Задание 1
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов в очереди: ";
    cin >> n;
    queue<int> q;
    cout << "Введите элементы очереди: \n";
    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        q.push(x);
    }
    q.pop();
    cout << "Новая очередь: ";
    while (!q.empty()) 
    {
        cout << q.front() << " ";
        q.pop();
    }

    //Задание 2
    if (q.empty()) 
        cout << "\nОчередь пуста" << endl;
    else 
        cout << "Очередь не пуста" << endl;
}