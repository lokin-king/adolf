
#include <iostream>
using namespace std ;
int main()
{
    int a,b,c;
    cin>>a,b,c;
    if (a<b && a<c && b<c){
        cout << a*a << ' ' << b*b << ' ' << c*c;
    }
    else {
        cout << a*2 << ' ' << b*2 << ' ' << c*2;
    }
    
    return 0;
}