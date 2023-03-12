#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    vector<int>vect(t);
    for (auto& x : vect)cin >> x;
    long long sum = 0, max = 0;
    for (auto x : vect)
    {
        sum += x;
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > max)
        {
            max = sum;
        }
    }
    if (max == 0)
    {
        int ans = *max_element(vect.begin(), vect.end());
        cout << ans << endl;
    }
    else
    {
        cout << max << endl;
    }
}