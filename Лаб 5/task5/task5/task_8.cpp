#include <iostream>
using namespace std;

// Базовый класс "Компьютерная игра"
class ComputerGame {
public:
    // Методы для начала и завершения игры
    void startGame() {
        cout << "Игра началась!" << endl;
    }
    void endGame() {
        cout << "Игра завершена!" << endl;
    }

    // Метод для отображения текущего состояния игры на экране
    virtual void displayGameState() = 0;
};

// Подкласс "РПГ"
class RPG : public ComputerGame {
public:
    // Реализация метода для отображения текущего состояния игры на экране
    void displayGameState() {
        cout << "Отображение текущего состояния РПГ-игры на экране" << endl;
    }
};

// Подкласс "Шутер"
class Shooter : public ComputerGame {
public:
    // Реализация метода для отображения текущего состояния игры на экране
    void displayGameState() {
        cout << "Отображение текущего состояния Шутер-игры на экране" << endl;
    }
};
/*
int main() {
    // Создание объектов классов
    RPG rpgGame;
    Shooter shooterGame;

    // Вызов методов объектов
    rpgGame.startGame();
    rpgGame.displayGameState();
    rpgGame.endGame();

    shooterGame.startGame();
    shooterGame.displayGameState();
    shooterGame.endGame();

}*/