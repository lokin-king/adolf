#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;

    cout << ": ";
    cin >> n;

    vector<double> A(n);

    srand(time(0));

    for (int i = 0; i < n; i++) {
        A[i] = (rand() % 21 - 10) + (rand() / (RAND_MAX + 1.0));
    }

    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] > 0) positiveCount++;
        else if (A[i] < 0) negativeCount++;
    }

    if (positiveCount > negativeCount) {
        cout << "<+." << endl;
    } else if (negativeCount > positiveCount) {
        cout << "<-." << endl;
    } else {
        cout << "+-." << endl;
    }

    return 0;
}
