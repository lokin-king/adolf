#include <iostream>

using namespace std;

char changeDirection(char currentDirection, int command) {
    // Масив для всіх можливих напрямків в порядку
    char directions[] = {'N', 'E', 'S', 'W'};
    int index = 0;
    
    // Знайдемо початковий індекс напряму
    for (int i = 0; i < 4; i++) {
        if (directions[i] == currentDirection) {
            index = i;
            break;
        }
    }
    
    // Виконуємо команду
    if (command == 1) { // Поворот наліво
        index = (index + 3) % 4;
    } else if (command == -1) { // Поворот направо
        index = (index + 1) % 4;
    }
    // Якщо команда 0, залишаємо напрямок без змін

    return directions[index];
}

int main() {
    char startDirection;
    int command;

    cout << "Введіть початковий напрямок руху робота (N, E, S, W): ";
    cin >> startDirection;
    cout << "Введіть команду (0 - продовжувати рух, 1 - наліво, -1 - направо): ";
    cin >> command;

    char newDirection = changeDirection(startDirection, command);
    cout << "Новий напрямок руху робота: " << newDirection << endl;

    return 0;
}
