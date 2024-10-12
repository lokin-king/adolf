#include <iostream>
using namespace std;



unsigned long long factorial(int n) {
    unsigned long long fak = 1;
    for (int i = 1; i <= n; ++i) {
        fak *= i;
    }
    return fak;
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    //знах фактор≥ал
    unsigned long long fact_a = factorial(a);
    unsigned long long fact_b = factorial(b);
    unsigned long long fact_c = factorial(c);
    unsigned long long fact_d = factorial(d);

    // ќбчис пар
    unsigned long long sum_ab = fact_a + fact_b;
    unsigned long long sum_ac = fact_a + fact_c;
    unsigned long long sum_ad = fact_a + fact_d;
    unsigned long long sum_bc = fact_b + fact_c;
    unsigned long long sum_bd = fact_b + fact_d;
    unsigned long long sum_cd = fact_c + fact_d;

    // «наход най б суму
    unsigned long long max_sum = sum_ab;
    string max_pair = "a, b";

    if (sum_ac > max_sum) {
        max_sum = sum_ac;
        max_pair = "a, c";
    }

    if (sum_ad > max_sum) {
        max_sum = sum_ad;
        max_pair = "a, d";
    }

    if (sum_bc > max_sum) {
        max_sum = sum_bc;
        max_pair = "b, c";
    }

    if (sum_bd > max_sum) {
        max_sum = sum_bd;
        max_pair = "b, d";
    }

    if (sum_cd > max_sum) {
        max_sum = sum_cd;
        max_pair = "c, d";
    }

    cout <<  max_pair << endl;
    cout <<  max_sum << endl;

    return 0;
}