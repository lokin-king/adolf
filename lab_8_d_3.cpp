#include <iostream>

using namespace std;

string getSeason(int month) {
    if (month == 12 || month == 1 || month == 2) {
        return "Зима";
    } else if (month >= 3 && month <= 5) {
        return "Весна";
    } else if (month >= 6 && month <= 8) {
        return "Літо";
    } else if (month >= 9 && month <= 11) {
        return "Осінь";
    } else {
        return "Неправильний номер місяця";
    }
}

int main() {
    int month;

    cout << "Введіть номер місяця (1-12): ";
    cin >> month;

    string season = getSeason(month);
    cout << "Пора року: " << season << endl;

    return 0;
}
