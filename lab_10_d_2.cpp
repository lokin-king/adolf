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

    int maxIndex = 0, minIndex = 0;


    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
    }

    cout << "<: " << maxIndex + 1 << endl;
    cout << ">: " << minIndex + 1 << endl;

    return 0;
}
