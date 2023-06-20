#include <iostream>
#include <thread>
using namespace std;

void sum_array(int* arr, int size, int& result)
{
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
	}
	result = sum;
}

int main() {
	const int size = 5;
	int arr1[size] = { 1, 2, 3, 4, 5 };
	int arr2[size] = { 6, 7, 8, 9, 10 };

	int result1 = 0;
	int result2 = 0;

	thread t1(sum_array, arr1, size, ref(result1));
	thread t2(sum_array, arr2, size, ref(result2));

	t1.join();
	t2.join();

	cout << "Total sum is: " << result1 + result2 << endl;
}