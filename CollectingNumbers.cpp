#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    vector<int> pos(n+1);
    for(int i=0; i<n; i++) {
        pos[a[i]] = i;
    }
    int ans = 1;
    int curr = pos[1];
    for(int i=2; i<=n; i++) {
        if(pos[i] < curr) {
            ans++;
        }
        curr = pos[i];
    }
    cout << ans << endl;
    return 0;
}
