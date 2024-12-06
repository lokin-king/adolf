#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a[n];
    cout << ":" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    cout << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << endl;
        }
    }


    cout << "< 10:" << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] < 10) {
            cout << a[i] << endl;
        }
    }

    return 0;
}
