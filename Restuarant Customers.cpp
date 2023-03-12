#include <map>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;
int main() {
    int t = 0;
    std::cin >> t;

    std::map<int, int> mp;
    while (t--) {
        int a = 0, b = 0;
        std::cin >> a >> b;

        mp[a]++;
        mp[b]--;
    }
    int m = 0;
    int sum = 0;
    for (auto x : mp)
    {
        sum += x.second;
        m = max(m, sum);
    }
    cout << m << endl;

    return 0;
}
