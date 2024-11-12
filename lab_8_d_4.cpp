#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    int choice;

    // Введення значень x, y та вибір функції f(x)
    cout << "Введіть значення x: ";
    cin >> x;
    cout << "Введіть значення y: ";
    cin >> y;
    cout << "Виберіть функцію f(x):\n1. sh(x)\n2. x^2\n3. e^x\n";
    cin >> choice;

    double fx;
    // Вибір функції f(x) залежно від вибору користувача
    switch (choice) {
        case 1:
            fx = sinh(x); // sh(x)
            break;
        case 2:
            fx = x * x; // x^2
            break;
        case 3:
            fx = exp(x); // e^x
            break;
        default:
            cout << "Невірний вибір функції!" << endl;
            return 1;
    }

    // Обчислення значення |xy|
    double absXY = fabs(x * y);
    double s;

    // Обчислення значення s в залежності від |xy|
    if (absXY > 10) {
        s = fx + log(y);
    } else if (absXY > 5 && absXY <= 10) {
        s = exp(fx + y);
    } else if (absXY == 5) {
        s = sin(x) + tan(y);
    } else {
        cout << "Значення |xy| не підходить для визначених умов." << endl;
        return 1;
    }

    // Виведення результату
    cout << "Результат s: " << s << endl;

    return 0;
}
