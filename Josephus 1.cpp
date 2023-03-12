#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n = 0;
    cin >> n;
    vector<int>vect(n);
    iota(vect.begin(), vect.end(), 1);
    while (vect.size() > 1)
    {
        vector<int>left;
        for (int i = 0; i < vect.size(); i++)
        {
            if (i & 1)
            {
                cout << vect[i] << " ";
            }
            else
            {
                left.push_back(vect[i]);
            }
        }
        if (!(vect.size() & 1))
        {
            vect = left;
        }
        else
        {
            int s = left.back();
            left.pop_back();
            vect.clear();
            vect.push_back(s);
            for (auto x : left)
            {
                vect.push_back(x);
            }
        }
    }
    cout << vect[0] << " ";
}