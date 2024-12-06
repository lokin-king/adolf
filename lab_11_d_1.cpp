#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {1, 2, 3, 4, 5}; 

    for (int i = A.size() - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}
