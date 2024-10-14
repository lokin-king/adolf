#include <iostream>
using namespace std;

int main() {
    int number;  
    int digits[5]; 
    int number_digits[5];  

    cout << "vest 5 chislo ";
    cin >> number;


    cout << " 1 2 3 4 5 ";
    for (int i = 0; i < 5; ++i) {
        cin >> digits[i];
    }

    for (int i = 4; i >= 0; --i) {
        number_digits[i] = number % 10;
        number /= 10;
    }

    bool all_digits_found = true;
    for (int i = 0; i < 5; ++i) {
        bool found = false;
        for (int j = 0; j < 5; ++j) {
            if (digits[i] == number_digits[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            all_digits_found = false;
            break;
        }
    }
    if (all_digits_found) {
        cout << "aga." << endl;
    }
    else {
        cout << "ne aga" << endl;
    }

    return 0;
}
