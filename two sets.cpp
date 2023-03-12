#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    unsigned long long sum = (n * (n + 1)) / 2;
    if (sum & 1)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        if (n & 1)
        {
            cout << (n - 1) / 2 << endl;
            int j = n;
            while (j > 0)
            {
                cout << j << " ";
                j -= 3;
                if (j <= 0) break;
                cout << j << " ";
                j--;
            }
            cout << endl;
            cout << (n + 1) / 2 << endl;
            j = n - 1;
            while (j > 0)
            {
                cout << j << " ";
                j--;
                if (j <= 0) break;
                cout << j << " ";
                j -= 3;
            }
            cout << endl;
        }
        else
        {
            int j = 2;
            cout << n / 2 << endl;
            while (j <= n)
            {
                cout << j << " ";
                j++;
                if (j > n)break;
                cout << j << " ";
                j += 3;
            }
            cout << endl;
            cout << n / 2 << endl;
            j = 1;
            while (j <= n)
            {
                cout << j << " ";
                j += 3;
                if (j > n)break;
                cout << j << " ";
                j++;
            }
        }
    }
}