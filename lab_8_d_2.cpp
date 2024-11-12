#include <iostream>

using namespace std;

char changeDirection(char currentDirection, int command) {
    char directions[] = {'N', 'E', 'S', 'W'};
    int index = 0;
    
    for (int i = 0; i < 4; i++) {
        if (directions[i] == currentDirection) {
            index = i;
            break;
        }
    }
    
    
    if (command == 1) {
        index = (index + 3) % 4;
    } else if (command == -1) {
        index = (index + 1) % 4;
    } 
    return directions[index];
}

int main() {
    char startDirection;
    int command;

    cout << "(N, E, S, W): ";
    cin >> startDirection;
    cout << " (0 - primo, 1 - livo, -1 - pravo): ";
    cin >> command;

    char newDirection = changeDirection(startDirection, command);
    cout << newDirection << endl;

    return 0;
}
