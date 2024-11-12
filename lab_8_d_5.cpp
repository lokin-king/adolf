#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << " A (x, y): ";
    cin >> x >> y;

    bool inFirstFigure = false;
    bool inSecondFigure = false;


    if ((x >= 0 && x <= 4 && y >= 0 && y <= 4) || 
        (x >= 0 && y >= 0 && x * x + y * y <= 4))  
    {
        inFirstFigure = true;
    }


    if ((x * x + y * y <= 4) &&  
        !(y <= -x || y <= x))    
    {
        inSecondFigure = true;
    }


    cout << (inFirstFigure ? "true" : "false") << endl;
    cout << (inSecondFigure ? "true" : "false") << endl;

    return 0;
}
