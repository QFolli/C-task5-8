#include <iostream>

#pragma pack(push, 4)
using namespace std;

struct MyStruct 
{
    int x;
    char y;
    double z;
};
#pragma pack(pop)

int main() 
{
    setlocale(LC_ALL, "Russian");
    cout << "Размер структуры: " << sizeof(MyStruct) << endl;
}