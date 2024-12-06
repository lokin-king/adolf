#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;  

    cout << " n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        long long factorial = 1; 

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }

        sum += factorial;  
    }

    cout <<  sum << endl;

    return 0;
}