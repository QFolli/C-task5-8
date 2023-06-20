#include <iostream>
#define PI 3.14159

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double radius;
    cout << "¬ведите радиус круга: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "ѕлощадь круга равна: " << area << endl;
}