#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "(n): ";
    cin >> n;

    vector<vector<double>> A(n, vector<double>(n));

    cout << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }


    cout << "gol dia: ";
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " ";
    }
    cout << endl;

    cout << "bich dia: ";
    for (int i = 0; i < n; i++) {
        cout << A[i][n-i-1] << " ";
    }
    cout << endl;


    cout << "X2: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << A[i][j] * 2 << " ";
        }
    }
    cout << endl;

    return 0;
}
