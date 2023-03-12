#include<iostream>
#include<map>
using namespace std;
int main()
{
	int t = 0;
	cin >> t;
	map<int, int>mp;
	for (int i = 0; i < t; i++)
	{
		int n = 0;
		cin >> n;
		mp[n]++;
	}
	cout << mp.size() << endl;
}