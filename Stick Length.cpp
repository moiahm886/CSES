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
    sort(vect.begin(), vect.end());
    if (t & 1 == 1)
    {
        int median = (t + 1) / 2;
        --median;
        median = vect[median];
        long long operations = 0;
        for (auto x : vect)
        {
            operations += abs(median - x);
        }
        cout << operations << endl;
    }
    else
    {
        int median = t / 2;
        long long operations = 0;
        median = vect[median];
        for (auto x : vect)
        {
            operations += abs(median - x);
        }
        cout << operations << endl;
    }
}