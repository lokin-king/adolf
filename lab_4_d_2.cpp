
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    float p, r;
    cout << "a";
    cin >> a ;
    cout << "b";
    cin >> b ;
    cout << "c";
    cin >> c ;
    p = (a + b + c) / 2;
    r = sqrt(((p-a)*(p-b)*(p-c))/p);
    cout << r;
   
    
}
