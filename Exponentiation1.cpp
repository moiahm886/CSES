#include <iostream>
using namespace std;

const int64_t MOD = 1000000007;

int64_t power(int64_t base, int64_t exp) {
    int64_t result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int64_t base, exp;
        cin >> base >> exp;
        cout << power(base, exp) << endl;
    }
    return 0;
}
