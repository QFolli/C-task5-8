#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double radius;
    cout << "������� ������ �����: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "������� ����� �����: " << area << endl;
}