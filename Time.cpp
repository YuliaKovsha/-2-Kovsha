#include "Time.h"
#include <cmath>


void Time::Init(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}

void Time::Read() {
    cout << "Введіть години, хвилини, секунди: ";
    cin >> hours >> minutes >> seconds;
}

void Time::Display() {
    cout << hours << ":" << minutes << ":" << seconds << endl;
}

string Time::toString() {
    return to_string(hours) + ":" + to_string(minutes) + ":" + to_string(seconds);
}

int Time::toSeconds() {//переведення часу у секунди
    return hours * 3600 + minutes * 60 + seconds;
}

int Time::toMinutes() {//переведення часу у хвилини
    return toSeconds() / 60;
}

void Time::addSeconds(int sec) {
    int total = toSeconds() + sec;//сума всіх секунд
    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
}

void Time::subtractSeconds(int sec) {
    int total = toSeconds() - sec;//різниця секунд від часу
    if (total < 0) total = 0;
    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;
}

int Time::differenceInSeconds(Time t) {
    return abs(toSeconds() - t.toSeconds());//різниця в секундах
}

bool Time::isEqual(Time t) { return toSeconds() == t.toSeconds(); }//порівняння
bool Time::isLess(Time t) { return toSeconds() < t.toSeconds(); }
bool Time::isGreater(Time t) { return toSeconds
