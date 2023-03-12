#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll mx = max(a, b);
        ll mn = min(a, b);
        ll sum = mx + mn;
        if (a == 0 && b == 0)cout << "YES\n";
        else if (mx == 0 || mn == 0)cout << "NO\n";
        else if (sum % 3 == 0 && double(mx) / double(mn) <= 2)cout << "YES\n";
        else cout << "NO\n";
    }
}