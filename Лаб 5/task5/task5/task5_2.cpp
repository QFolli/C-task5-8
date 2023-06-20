#include <iostream>

#define DEBUG
using namespace std;
 
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Начало программы.\n";

#ifdef DEBUG
	cout << "Информация об отладке...\n";
#endif

	cout << "Конец программы.\n";
}