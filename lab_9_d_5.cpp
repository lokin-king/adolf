#include <iostream>
using namespace std;

int main() {
    double a, h;
    double sum = 0.0;

    cout << " a: ";
    cin >> a;
    cout << " h: ";
    cin >> h;

    for (double i = -5.5; i <= a; i += h) {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}
