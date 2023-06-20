#include <iostream>
#include <thread>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int main() {
    int result1, result2;

    thread t1([&result1]() { result1 = multiply(2, 3); });
    thread t2([&result2]() { result2 = multiply(4, 5); });

    t1.join();
    t2.join();

    int result = result1 * result2;
    cout << "Result: " << result << endl;

}