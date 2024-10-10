
#include <iostream>
using namespace std;

int main() {
    int i = 0,dil = 52,a,b;
    cin >> a;
    cin >> b;

    i = 1;
start:
    if (i <= a*b) {
        if (i % a == 0 && i % b == 0) {
            dil = i;
            goto end;
        }
        else {
            cout << "net" << endl;
            i++;
        }
        goto start; 
    }
end:
    cout << dil << endl;

    return 0;
}