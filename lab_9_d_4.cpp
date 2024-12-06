#include <iostream>
using namespace std;

int main() {
    double price_per_unit ;
    cin >> price_per_unit ;

    cout << "------------------------" << endl;

    for (int quantity = 2; quantity <= 10; ++quantity) {
        double total_cost = quantity * price_per_unit;
        cout << quantity << "\t\t" << total_cost << " grn" << endl;
    }

    return 0;
}
