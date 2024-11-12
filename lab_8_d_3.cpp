#include <iostream>

using namespace std;

string getSeason(int month) {
    if (month == 12 || month == 1 || month == 2) {
        return "zim";
    } else if (month >= 3 && month <= 5) {
        return "vesn";
    } else if (month >= 6 && month <= 8) {
        return "lito";
    } else if (month >= 9 && month <= 11) {
        return "osin";
    } else {
        return "ne to";
    }
}

int main() {
    int month;

    cout << " (1-12): ";
    cin >> month;

    string season = getSeason(month);
    cout <<  season << endl;

    return 0;
}
