#include<iostream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        unsigned long long x = 0, y = 0;
        cin >> x >> y;
        if (x >= y)
        {
            if (x & 1)
            {
                unsigned long long answer = (x - 1) * (x - 1) + y;
                cout << answer << endl;
            }
            else
            {
                unsigned long long answer = (x * x) - (y - 1);
                cout << answer << endl;
            }
        }
        else if (y > x)
        {
            if (y & 1)
            {
                unsigned long long answer = (y * y) - (x - 1);
                cout << answer << endl;
            }
            else
            {
                unsigned long long answer = (y - 1) * (y - 1) + x;
                cout << answer << endl;
            }
        }
    }
}