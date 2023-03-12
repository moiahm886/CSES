#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, target = 0;
    cin >> t >> target;
    vector<int>vect(t);
    map<int, int>mp;
    for (int i = 0; i < t; i++)
    {
        cin >> vect[i];
        mp[vect[i]] = i;
    }
    for (int i = 0; i < vect.size(); i++)
    {
        if (mp.count(target - vect[i]) && i != mp[target - vect[i]])
        {
            cout << i + 1 << " " << mp[target - vect[i]] + 1 << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}