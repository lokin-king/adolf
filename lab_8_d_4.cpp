#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    int choice;


    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << " f(x):\n1. sh(x)\n2. x^2\n3. e^x";
    cin >> choice;

    double fx;
    switch (choice) {
        case 1:
            fx = sinh(x); 
            break;
        case 2:
            fx = x * x;
            break;
        case 3:
            fx = exp(x); 
            break;
        default:
            cout << "ne to!" << endl;
            return 1;
    }


    double absXY = fabs(x * y);
    double s;

    if (absXY > 10) {
        s = fx + log(y);
    } else if (absXY > 5 && absXY <= 10) {
        s = exp(fx + y);
    } else if (absXY == 5) {
        s = sin(x) + tan(y);
    } else {
        cout << "|xy| ne to." << endl;
        return 1;
    }


    cout << " s: " << s << endl;

    return 0;
}
