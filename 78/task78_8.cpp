#include <iostream>
#include <thread>
using namespace std;
 
void print_numbers_forward() {
    for (int i = 1; i <= 100; ++i) {
        cout << i << " ";
    }
}

void print_numbers_backward() {
    for (int i = 100; i >= 1; --i) {
        cout << i << " ";
    }
}

int main() {
    thread t1(print_numbers_forward);
    thread t2(print_numbers_backward);

    t1.join();
    t2.join();

}