#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c, x, y;
    cout << "Введіть розміри цеглини (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Введіть розміри отвору (x, y): ";
    cin >> x >> y;

    // Сортуємо розміри отвору і цеглини для зручності порівняння
    double brickSides[] = {a, b, c};
    double holeSides[] = {x, y};

    sort(brickSides, brickSides + 3);  // сортуємо a, b, c
    sort(holeSides, holeSides + 2);    // сортуємо x, y

    // Перевіряємо, чи пройде найменша пара сторін цеглини через отвір
    if (brickSides[0] <= holeSides[0] && brickSides[1] <= holeSides[1]) {
        cout << "Цеглина пройде через отвір." << endl;
    } else {
        cout << "Цеглина не пройде через отвір." << endl;
    }

    return 0;
}
