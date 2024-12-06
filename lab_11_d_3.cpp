#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << ": ";
    cin >> n;

    vector<int> A(n);


    cout << ": " << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    cout << "//2: ";
    for (int i = 0; i < n; i += 2) {
        cout << A[i] << " ";
    }
    cout << endl;


    cout << ": ";
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            cout << A[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
