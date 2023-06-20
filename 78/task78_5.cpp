#include <iostream> 
#include <thread> 
#include <chrono>
using namespace std;
char c;
void Random()
{
	while (c == NULL)
	{
		cout << rand() % 10 + 1 << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}

}
int main()
{
	thread t1(Random);
	c = getchar();
	t1.join();
}