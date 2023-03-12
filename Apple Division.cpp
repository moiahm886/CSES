#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;

int n, p[MAXN];
long long ans = INT_MAX;

void dfs(int i, long long sum) {
    if (i == n) {
        ans = min(ans, abs(sum));
        return;
    }
    dfs(i + 1, sum + p[i]);
    dfs(i + 1, sum - p[i]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}
