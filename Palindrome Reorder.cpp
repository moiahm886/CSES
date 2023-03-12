#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int freq[26] = { 0 };

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'A']++;
    }

    int odd_freq = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            odd_freq++;
        }
    }

    if (odd_freq > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string ans(n, ' ');

    int left = 0, right = n - 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 0) {
            for (int j = 0; j < freq[i] / 2; j++) {
                ans[left++] = i + 'A';
                ans[right--] = i + 'A';
            }
        }
        else {
            for (int j = 0; j < freq[i]; j++) {
                ans[n / 2] = i + 'A';
                if (j < freq[i] / 2) {
                    ans[left++] = i + 'A';
                }
                else if (j > freq[i] / 2) {
                    ans[right--] = i + 'A';
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
