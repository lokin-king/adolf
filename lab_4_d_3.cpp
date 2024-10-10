
#include <iostream>
using namespace std;

int main() {
    double numbers[10];
    double max_number;
    int i = 0;

    cout << "10 ch";
    for (i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    max_number = numbers[0];
    i = 1;
start:
    if (i < 10) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
        i++;
        goto start; 
    }

    cout << max_number << endl;

    return 0;
}