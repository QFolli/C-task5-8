#include <iostream>
#include <thread>

const int NumThreads = 5;
const int NumbersPerThread = 20;

using namespace std;
// Функция, которая будет выполняться в каждом потоке
void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
}

int main() {
    thread threads[NumThreads];

    for (int i = 0; i < NumThreads; ++i) {
        int start = i * NumbersPerThread + 1;
        int end = (i + 1) * NumbersPerThread;

        threads[i] = std::thread(printNumbers, start, end);
    }

    for (int i = 0; i < NumThreads; ++i) {
        threads[i].join();
    }

    return 0;
}