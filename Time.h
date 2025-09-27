#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public: //метод ініціалізації
    void Init(int h, int m, int s);
    void Read();//введення з клавіатури
    void Display();//виведення на екран
    string toString();//перетворення в рядок

    int toSeconds();
    int toMinutes();

    void addSeconds(int sec);
    void subtractSeconds(int sec);
    int differenceInSeconds(Time t);

    bool isEqual(Time t);
    bool isLess(Time t);
    bool isGreater(Time t);
};
