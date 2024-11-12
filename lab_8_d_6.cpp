#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c, x, y;
    cout << " (a, b, c): ";
    cin >> a >> b >> c;
    cout << " (x, y): ";
    cin >> x >> y;


    double brickSides[] = {a, b, c};
    double holeSides[] = {x, y};

    sort(brickSides, brickSides + 3);  
    sort(holeSides, holeSides + 2);    

    if (brickSides[0] <= holeSides[0] && brickSides[1] <= holeSides[1]) {
        cout << "prolize." << endl;
    } else {
        cout << "ne proliz." << endl;
    }

    return 0;
}
