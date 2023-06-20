#include <iostream>
#include <string>
#include <list>

using namespace std;

class Student {
private:
    string name;
    string surname;
    int birth_year;
    double average_score;
    list<int> scores;

public:
    // Конструктор класса
    Student(string name, string surname, int birth_year, double average_score) {
        this->name = name;
        this->surname = surname;
        this->birth_year = birth_year;
        this->average_score = average_score;
    }

    // Методы для изменения значений полей
    void setName(string name) {
        this->name = name;
    }

    void setSurname(string surname) {
        this->surname = surname;
    }

    void setBirthYear(int birth_year) {
        this->birth_year = birth_year;
    }

    void setAverageScore(double average_score) {
        this->average_score = average_score;
    }

    // Метод для добавления оценок студента
    void addScore(int score) {
        scores.push_back(score);
        double sum = 0.0;

        for (list<int>::iterator it = scores.begin(); it != scores.end(); ++it) {
            sum += *it;
        }

        average_score = sum / scores.size();
    }

    // Метод для определения лучшего студента в группе
    static Student getBestStudent(list<Student> students) {
        Student best_student("", "", 0, 0.0);

        for (list<Student>::iterator it = students.begin(); it != students.end(); ++it) {
            if (it->average_score > best_student.average_score) {
                best_student = *it;
            }
        }

        return best_student;
    }

    // Геттеры для полей класса
    string getName() {
        return name;
    }

    string getSurname() {
        return surname;
    }
};
/*
int main() {
    list<Student> students;

    // Создание объектов класса и добавление их в список
    Student student1("Иван", "Иванов", 2000, 4.5);
    student1.addScore(5);
    student1.addScore(4);
    student1.addScore(5);
    students.push_back(student1);

    Student student2("Петр", "Петров", 2001, 4.2);
    student2.addScore(3);
    student2.addScore(4);
    student2.addScore(5);
    students.push_back(student2);

    Student student3("Сидор", "Сидоров", 2002, 4.8);
    student3.addScore(5);
    student3.addScore(5);
    student3.addScore(5);
    students.push_back(student3);

    // Определение лучшего студента в группе
    Student best_student = Student::getBestStudent(students);

    cout << "Лучший студент: " << best_student.getName() << " " << best_student.getSurname() << endl;

}*/