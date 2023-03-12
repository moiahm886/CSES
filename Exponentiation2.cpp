#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
const int MOD = 1e9+7;
int power(int base, int exp,int MOD) {
    int res = 1;
    base%=MOD;
    while(exp > 0) {
        if(exp&1) {
            res = (res*base) % MOD;
        }
        base = (base*base) % MOD;
        exp >>= 1;
    }
    return res;
}
signed main() {
    int t=1;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int r = power(b, c,MOD-1);
        cout << power(a, r,MOD) << '\n';
    }

    return 0;
}
