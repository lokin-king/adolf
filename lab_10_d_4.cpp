#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIZE = 10; 
    int A[SIZE];
    int count = 0;

  
    srand(time(0));


    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % 201;
    }



    for (int i = 0; i < SIZE; i++) {
        cout << A[i] << " ";
    }
    cout << endl;


    for (int i = 1; i < SIZE; i++) {
        if ((A[i-1] >= 0 && A[i] < 0) || (A[i-1] < 0 && A[i] >= 0)) {
            count++;
        }
    }

    cout <<"___________" << count << endl;

    return 0;
}
