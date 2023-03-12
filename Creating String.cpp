#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
map<int, int>mp;
int factorial(int n)
{
    if (n == 1)return 1;
    if (mp.count(n))return mp[n];
    mp[n] = n * factorial(n - 1);
    return mp[n];
}
int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    map<char, int>mp;
    for (auto x : str)
    {
        mp[x]++;
    }
    int denom = 1;
    for (auto x : mp)
    {
        if (x.second > 1)denom *= factorial(x.second);
    }
    int num = str.size();
    cout << factorial(num) / denom << endl;
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}
