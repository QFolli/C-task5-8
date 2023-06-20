#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

using namespace std;
mutex mtx; // мьютекс для синхронизации вывода на экран
condition_variable cv; // условная переменная для синхронизации работы потоков
int count1 = 0; // количество сгенерированных чисел

void generateNumber() {
	while (count1 < 10) {
		unique_lock< mutex> lock(mtx);
		int num = rand() % 1000 + 1; // генерируем случайное число от 1 до 1000
		cout << "Сгенерировано число: " << num << endl;
		count1++; // увеличиваем количество сгенерированных чисел
		lock.unlock();
		cv.notify_one(); // оповещаем второй поток о том, что число сгенерировано
		this_thread::sleep_for(chrono::milliseconds(500)); // ждем 500 миллисекунд
	}
}

void printNumber() {
	while (count1 < 10) {
		unique_lock< mutex> lock(mtx);
		cv.wait(lock); // ждем оповещения о сгенерированном числе от первого потока
		cout << "Выведено число: " << count1 << endl;
		lock.unlock();
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	thread t1(generateNumber); // создаем первый поток
	thread t2(printNumber); // создаем второй поток
	t1.join(); // ждем, пока первый поток закончит свою работу
	t2.join(); // ждем, пока второй поток закончит свою работу
}