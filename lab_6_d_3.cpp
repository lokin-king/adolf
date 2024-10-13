#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "rivno stor" << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "rivno bedr." << endl;
        }
        else {
            cout << "rizno stor." << endl;
        }
    }
    else {
        
        cout << "vse ***** davay po novay" << endl;
    }

    return 0;
}