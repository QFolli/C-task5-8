#include <iostream>
#include <chrono>

using namespace std;

#pragma optimize("", off)
int main()
{
    auto start = chrono::high_resolution_clock::now();
    for (long i = 0; i < 1000000000; ++i) {}
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    cout << "����� ���������� ��������� ��� �����������: " << elapsed.count() << " ������" << endl;

#pragma optimize("", on)
    start = chrono::high_resolution_clock::now();
    for (long i = 0; i < 1000000000; ++i) {}
    end = chrono::high_resolution_clock::now();
    elapsed = end - start;
    cout << "����� ���������� ��������� � ������������: " << elapsed.count() << " ������" << endl;

}