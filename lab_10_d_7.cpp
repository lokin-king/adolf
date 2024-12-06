#include <iostream>
#include <vector>

using namespace std;

struct Disk {
    double size;
    double price; 
};

int main() {
    vector<Disk> disks = {
        {500, 2000}, {1000, 3000}, {2000, 5000}, {250, 1500},
        {4000, 7000}, {100, 1000}, {1500, 4000}
    };
    
    double n;
    cin >> n;
    
    for (const Disk& disk : disks) {
        if (disk.price > n) {
            cout << disk.size << " GB\n";
        }
    }
    
    return 0;
}
