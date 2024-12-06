#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;


    cout << ": ";
    cin >> n;

    vector<double> A(n);


    cout << ": " << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end(), greater<double>());


    cout << ": ";
    for (double val : A) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
