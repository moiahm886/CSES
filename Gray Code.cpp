#include<iostream>
#include<vector>
using namespace std;
vector<string> grey(int n)
{
    vector<string>vect{ "0","1" };
    int cnt = 1;
    if (n == 1)
    {
        return vect;
    }
    else
    {
        while (cnt != n)
        {
            vector<string>answer;
            for (int i = 0; i < vect.size(); i++)
            {
                answer.push_back("0" + vect[i]);
            }
            for (int i = vect.size() - 1; i >= 0; i--)
            {
                answer.push_back("1" + vect[i]);
            }
            vect = answer;
            cnt++;
        }
        return vect;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    vector<string>vect = grey(n);
    for (auto x : vect)
    {
        cout << x << endl;
    }
}