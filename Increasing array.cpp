#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int>vect(n);
	for (auto& x : vect)cin >> x;
	long long cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (vect[i] > vect[i + 1])
		{
			cnt += vect[i] - vect[i + 1];
			vect[i + 1] = vect[i];
		}
	}
	cout << cnt << endl;
}