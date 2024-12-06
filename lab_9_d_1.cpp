#include <iostream>
using namespace std;

int main() {
    cout << " 20  35:" << endl;
    for (int i = 20; i <= 35; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    int a, b, n;
    cout <<  "a, b  n: ";
    cin >> a >> b >> n;

  
    for (int i = a; i <= b; i++) {
        if (i % n != 0) {
            cout << i << endl;
        }
    }

    return 0;
}
