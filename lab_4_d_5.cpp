#include <iostream>

using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "1" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "2" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "3" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "4" << endl;
    }
    else if (x == 0 && y == 0) {
        cout << "00" << endl;
    }
    else if (x == 0) {
        cout << " Y" << endl;
    }
    else if (y == 0) {
        cout << "X" << endl;
    }

    return 0;
}