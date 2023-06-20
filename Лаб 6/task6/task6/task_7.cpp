#include <chrono>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	auto start = chrono::high_resolution_clock::now();
	for (long i = 0; i < 1000000000; ++i) {}
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> elapsed = end - start;
	cout << "Время выполнения программы: " << elapsed.count() << " секунд" << endl;

}