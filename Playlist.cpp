#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    unordered_set<int> s;
    int i = 0, j = 0;
    while (j < n) {
        if (s.find(a[j]) == s.end()) {
            s.insert(a[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        else {
            s.erase(a[i]);
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}
