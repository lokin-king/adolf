
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int F_1, F_2 ;
    float R,a ;
    cout << "F_1";
    cin >> F_1 ;
    cout << "F_2";
    cin >> F_2 ;
    cout << "A";
    cin >> a ;
    R = sqrt(pow(F_1,2)+pow(F_2,2)+2*F_1*F_2*cos(a));
    cout << R;
    
}
