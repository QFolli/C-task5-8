#include <iostream>

#define DEBUG
using namespace std;
 
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ���������.\n";

#ifdef DEBUG
	cout << "���������� �� �������...\n";
#endif

	cout << "����� ���������.\n";
}