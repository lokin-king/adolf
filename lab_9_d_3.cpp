#include <iostream>
using namespace std;

int main() {
    double sum1 = 0;
    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 30; j++) {
            sum1 += i / j;
        }
    }
    cout << "(a): " << sum1 << endl;

    // Частина (b)
    int sum2 = 0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            sum2 += (i + j);
        }
    }
    cout << "(b): " << sum2 << endl;

    return 0;
}
