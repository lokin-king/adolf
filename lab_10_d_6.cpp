#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> A = {1.5, -2.3, 3.7, 0, -1.2, 2.5};
    vector<double> B;
    
    for (double val : A) {
        if (val > 0) B.push_back(val);
    }

    sort(B.begin(), B.end());

    for (double val : B) cout << val << " ";
    return 0;
}
