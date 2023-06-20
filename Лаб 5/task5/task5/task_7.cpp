#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;
    int attack;
    int defense;

    // Конструктор класса
    Player(string n, int h, int a, int d) {
        name = n;
        health = h;
        attack = a;
        defense = d;
    }

    // Методы для изменения значений полей
    void setName(string n) {
        name = n;
    }

    void setHealth(int h) {
        health = h;
    }

    void setAttack(int a) {
        attack = a;
    }

    void setDefense(int d) {
        defense = d;
    }

    // Методы для атаки и защиты игрока
    void attackPlayer(Player& p) {
        p.health -= attack - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack - defense;
    }
};

// Подкласс "Воин"
class Warrior : public Player {
public:
    Warrior(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // Реализация методов для атаки и защиты игрока типа "Воин"
    void attackPlayer(Player& p) {
        p.health -= (attack + 10) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 2 - defense;
    }
};

// Подкласс "Маг"
class Mage : public Player {
public:
    Mage(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // Реализация методов для атаки и защиты игрока типа "Маг"
    void attackPlayer(Player& p) {
        p.health -= (attack * 2) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 4 - defense;
    }
};

// Подкласс "Лучник"
class Archer : public Player {
public:
    Archer(string n, int h, int a, int d) : Player(n, h, a, d) {}

    // Реализация методов для атаки и защиты игрока типа "Лучник"
    void attackPlayer(Player& p) {
        p.health -= (attack + 5) - p.defense;
    }

    void defendPlayer(Player& p) {
        health += p.attack / 3 - defense;
    }
};
/*
int main() {

    // Создание объектов класса "Игрок" и его подклассов
    Player player("Игрок", 100, 20, 10);
    Warrior warrior("Воин", 150, 30, 20);
    Mage mage("Маг", 80, 40, 5);
    Archer archer("Лучник", 120, 25, 15);

    // Изменение значений полей объектов класса "Игрок" и его подклассов
    player.setName("Новый Игрок");
    warrior.setHealth(200);
    mage.setAttack(50);
    archer.setDefense(25);

    // Атака и защита объектов класса "Игрок" и его подклассов
    player.attackPlayer(warrior);
    warrior.defendPlayer(player);

    mage.attackPlayer(archer);
    archer.defendPlayer(mage);

}*/