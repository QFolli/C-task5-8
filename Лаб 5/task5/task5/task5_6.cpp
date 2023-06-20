#include <iostream>
using namespace std;

#ifdef MY_MACRO
   #error "MY_MACRO is defined!"
#endif

int main()
{
	std::cout << "Hello, world!" << std::endl;
	return 0;
}