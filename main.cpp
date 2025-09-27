#include "Time.h"
#include <Windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Time t1, t2;

    t1.Init(12, 30, 45);//перший час ініціалізація
    t2.Read();//другий час з клавіатури

    cout << "Час 1: "; t1.Display();
    cout << "Час 2: "; t2.Display();

    cout << "Різниця в секундах: "
        << t1.differenceInSeconds(t2) << endl;

    t1.addSeconds(500);
    cout << "Час 1 після +500 сек: " << t1.toString() << endl;

    return 0;
}
