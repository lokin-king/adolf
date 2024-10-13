#include <iostream>
using namespace std;




double min(double i, double l) {
    return (i > l) ? l : i;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    cout << min(a, b);

    return 0;
}