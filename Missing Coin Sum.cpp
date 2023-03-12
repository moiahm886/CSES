#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	vector<long long>vect(t);
	for (auto& x : vect)cin >> x;
	long long sum = 0;
	sort(vect.begin(), vect.end());
	for (auto x : vect)
	{
		if (x > sum + 1)break;
		sum += x;
	}
	cout << sum + 1 << endl;
}