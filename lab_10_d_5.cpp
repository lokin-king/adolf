#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> A = {5, 3, 8, 6, 2, 10, 7};
    int minVal = *min_element(A.begin(), A.end());
    int maxVal = *max_element(A.begin(), A.end());
    auto minIt = find(A.begin(), A.end(), minVal);
    auto maxIt = find(A.begin(), A.end(), maxVal);
    
    vector<int> result;
    
    if (minIt > maxIt) swap(minIt, maxIt);
    
    for (auto it = A.begin(); it != A.end(); ++it) {
        if (it < minIt || it > maxIt) {
            result.push_back(*it);
        }
    }

    for (int val : result) cout << val << " ";
    return 0;
}
