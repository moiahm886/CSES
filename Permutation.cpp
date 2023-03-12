#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	if (n < 4)
	{
		cout << "NO SOLUTION\n";
		return 0;
	}
	else
	{
		vector<int>vect(n), even, odd;
		iota(vect.begin(), vect.end(), 1);
		for (auto x : vect)
		{
			if (!(x & 1))cout << x << " ";
		}
		for (auto x : vect)
		{
			if (x & 1)cout << x << " ";
		}
		cout << endl;
	}

}

