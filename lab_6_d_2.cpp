#include <iostream>
#include <cmath>
using namespace std;






int main() {
    int a;
    cin >> a;
    if (a <= 2) {
        cout << pow(a, 2) + 5 * a - 6;
    }
    else
        cout << abs(a+cos(a));
    
    return 0;
}