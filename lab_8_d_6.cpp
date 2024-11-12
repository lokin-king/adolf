#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Введіть координати точки A (x, y): ";
    cin >> x >> y;

    bool inFirstFigure = false;
    bool inSecondFigure = false;

    // Перевірка для першої фігури (зліва)
    if ((x >= 0 && x <= 4 && y >= 0 && y <= 4) ||  // Квадрат
        (x >= 0 && y >= 0 && x * x + y * y <= 4))  // Сектор кола
    {
        inFirstFigure = true;
    }

    // Перевірка для другої фігури (справа)
    if ((x * x + y * y <= 4) &&  // Півколо
        !(y <= -x || y <= x))    // Виключаємо сектор
    {
        inSecondFigure = true;
    }

    // Виведення результатів
    cout << "Для першої фігури: " << (inFirstFigure ? "true" : "false") << endl;
    cout << "Для другої фігури: " << (inSecondFigure ? "true" : "false") << endl;

    return 0;
}
