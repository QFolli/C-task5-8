#include <iostream>
#pragma warning(disable : 4996);
using namespace std;

#ifdef NDEBUG
#warning "Warning!"
#endif

int main() {
  setlocale(LC_ALL, "Russian");
  cout << "Hello, world!";
}

