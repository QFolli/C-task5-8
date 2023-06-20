#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    // Конструктор класса
    Bank(string accountNumber, double balance, double interestRate) {
        this->accountNumber = accountNumber;
        this->balance = balance;
        this->interestRate = interestRate;
    }

    // Метод для открытия банковского счета
    void openAccount() {
        cout << "Банковский счет открыт." << endl;
    }

    // Метод для закрытия банковского счета
    void closeAccount() {
        cout << "Банковский счет закрыт." << endl;
    }

    // Метод для перевода денег между счетами
    void transferMoney(Bank& otherAccount, double amount) {
        if (balance >= amount) {
            balance -= amount;
            otherAccount.balance += amount;
            cout << "Перевод выполнен успешно." << endl;
        }
        else {
            cout << "Недостаточно средств на счете." << endl;
        }
    }

private:
    string accountNumber;   // Номер счета
    double balance;         // Баланс
    double interestRate;    // Процентная ставка
};
/*
int main() {
    // Создание двух банковских счетов
    Bank account1("1234567890", 1000.0, 0.01);
    Bank account2("0987654321", 500.0, 0.02);

    // Открытие банковских счетов
    account1.openAccount();
    account2.openAccount();

    // Перевод денег между счетами
    account1.transferMoney(account2, 500.0);

    // Закрытие банковских счетов
    account1.closeAccount();
    account2.closeAccount();

}*/