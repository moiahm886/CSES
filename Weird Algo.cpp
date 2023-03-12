#include<iostream>
#include<vector>
using namespace std;
vector<int>vect;
void solve(long long n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    if (n & 1)
    {
        cout << n << " ";
        return solve((n * 3) + 1);
    }
    else
    {
        cout << n << " ";
        return solve(n / 2);
    }
}
int main()
{
    long long n = 0;
    cin >> n;
    solve(n);
}