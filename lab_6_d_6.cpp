#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double x, y, x0, y0, R, distance;

    cout << "M(x, y): ";
    cin >> x >> y;

    cout << "C(x0, y0) , R: ";
    cin >> x0 >> y0 >> R;

   
    distance = sqrt(pow(x - x0, 2) + pow(y - y0, 2));

    
    if (distance <= R) {
        cout << "Na koli" << endl;
    }
    else {
        cout << "Ne na koli" << endl;
    }

    return 0;
}