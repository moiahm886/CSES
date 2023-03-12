#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

int countFactors(int n) {
    vector<int> factors = primeFactors(n);
    int count = 1;
    int currentFactor = factors[0];
    int currentCount = 1;
    for (int i = 1; i < factors.size(); i++) {
        if (factors[i] == currentFactor) {
            currentCount++;
        }
        else {
            count *= (currentCount + 1);
            currentFactor = factors[i];
            currentCount = 1;
        }
    }
    count *= (currentCount + 1);
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        if (n == 1)cout << 1 << endl;
        else cout << countFactors(n) << endl;
    }
    return 0;
}
