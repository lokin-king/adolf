#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x , t;
    cin >> x;
    if (x<0){
        t = 1/(1+ pow(cos(x),2)) ;
        
    }
    if (x<=0){
        t =  (x-1)/(x+1) ;
    }
    cout << t << endl;
    return 0;
}