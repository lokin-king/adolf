
#include <iostream>
using namespace std;



double max(double i,double l) {
    return (i > l) ? i:l ;
}

double max_(double i, double l, double v) {
    return max(max(i, l), v);
}

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << (max(a, a + b) + max(a, b + c)) / (1 + max_(a + b * c, b - c, 25));

    return 0;
}