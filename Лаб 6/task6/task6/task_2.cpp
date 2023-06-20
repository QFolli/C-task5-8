#include <iostream>
#include <string>
using namespace std;

int main() 
{
	  //Задание 1
    setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--) 
    {
        cout << str[i];
    }
    //Задание 2
    cout << "\nВведите строку: ";
    getline(cin, str);
    int len = str.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1]) 
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << str << " - палиндром" << endl;
    else
        cout << str << " - не палиндром" << endl;
}