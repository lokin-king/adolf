#include <iostream>
using namespace std;

int main() {
    int n;

    cout << ": ";
    cin >> n;

    double a[n];
    cout << ":" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {  
            a[i] += 2;
        } else {  
            if (a[i] != 0) {
                a[i] = 1 / a[i];
            } else {дорів
                cout <<  i + 1 << " 0." << endl;
            }
        }
    }

    cout << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
