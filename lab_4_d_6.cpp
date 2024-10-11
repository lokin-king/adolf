#include <iostream>
using namespace std;

int main() {
    double a1, a2, a3, a4, a5;

    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    if (a1 != a2 && a1 != a3 && a1 != a4 && a1 != a5) {
        cout << "1" << endl;
    }
    else if (a2 != a1 && a2 != a3 && a2 != a4 && a2 != a5) {
        cout << "2" << endl;
    }
    else if (a3 != a1 && a3 != a2 && a3 != a4 && a3 != a5) {
        cout << "3" << endl;
    }
    else if (a4 != a1 && a4 != a2 && a4 != a3 && a4 != a5) {
        cout << "4" << endl;
    }
    else {
        cout << "5" << endl;
    }

    return 0;
}