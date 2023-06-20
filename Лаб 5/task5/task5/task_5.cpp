#include <iostream>
#include <string>
#include <list>

using namespace std;

// Определяем класс "Контакт"
class Contact {
public:
    string name;
    string surname;
    string phone_number;
    string email;

    // Конструктор класса
    Contact(string name, string surname, string phone_number, string email) {
        this->name = name;
        this->surname = surname;
        this->phone_number = phone_number;
        this->email = email;
    }
};

// Определяем класс "Телефонная книга"
class Phonebook {
public:
    list<Contact> contacts;

    // Метод для добавления контакта
    void add_contact(Contact contact) {
        contacts.push_back(contact);
    }

    // Метод для удаления контакта
    void remove_contact(string name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->name == name) {
                contacts.erase(it);
                break;
            }
        }
    }

    // Метод для поиска контакта по имени
    Contact find_contact(string name) {
        for (auto it = contacts.begin(); it != contacts.end(); ++it) {
            if (it->name == name) {
                return *it;
            }
        }
        return Contact("", "", "", "");
    }
};
/*
int main() {
    // Создаем объект класса "Телефонная книга"
    Phonebook phonebook;

    // Создаем несколько контактов
    Contact contact1("Иван", "Иванов", "+7-999-123-45-67", "ivanov@example.com");
    Contact contact2("Петр", "Петров", "+7-999-234-56-78", "petrov@example.com");
    Contact contact3("Сидор", "Сидоров", "+7-999-345-67-89", "sidorov@example.com");

    // Добавляем контакты в телефонную книгу
    phonebook.add_contact(contact1);
    phonebook.add_contact(contact2);
    phonebook.add_contact(contact3);

    // Ищем контакт по имени
    Contact found_contact = phonebook.find_contact("Иван");

    // Выводим информацию о найденном контакте
    cout << found_contact.name << endl;
    cout << found_contact.surname << endl;
    cout << found_contact.phone_number << endl;
    cout << found_contact.email << endl;

    // Удаляем контакт из телефонной книги
    phonebook.remove_contact("Иван");

}*/