#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//Задание 1
	setlocale(LC_ALL, "Russian");
	stack<int> s;
	int n;
	cout << "Введите количество элементов в стеке: \n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cout << "Введите элемент " << i + 1 << ": ";
		cin >> x;
		s.push(x);
	}
	s.pop();
	cout << "Новый стек: ";
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}

	//Задание 2
	if (s.empty())
		cout << "\nСтек пуст" << endl;
	else
		cout << "Стек не пуст" << endl;
}