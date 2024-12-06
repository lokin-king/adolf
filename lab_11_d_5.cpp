#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, m;

    cout << ": ";
    cin >> n;
    vector<double> A(n);
    cout << ": ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << ": ";
    cin >> m;
    vector<double> B(m);
    cout << ": ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int positiveA = 0, negativeA = 0, positiveB = 0, negativeB = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] > 0) positiveA++;
        else if (A[i] < 0) negativeA++;
    }

    for (int i = 0; i < m; i++) {
        if (B[i] > 0) positiveB++;
        else if (B[i] < 0) negativeB++;
    }

    vector<double> result;

    if (positiveA > negativeB) {
        for (int i = 0; i < min(n, m); i++) {
            result.push_back(pow(A[i], 2) + pow(B[i], 2));
        }
    } else if (positiveA < negativeB) {
        for (int i = 0; i < min(n, m); i++) {
            result.push_back(pow(A[i], 2) - pow(B[i], 2));
        }
    } else {
        if (negativeA > positiveB) {
            for (int i = 0; i < min(n, m); i++) {
                result.push_back(pow(A[i], 2) + pow(B[i], 3));
            }
        } else {
            for (int i = 0; i < min(n, m); i++) {
                result.push_back(pow(A[i], 3) + pow(B[i], 3));
            }
        }
    }

    cout << "rez: ";
    for (double val : result) {
        cout << val << " ";
    }

    return 0;
}
