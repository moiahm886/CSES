#include<iostream>
#include<string>
#include <climits>
using namespace std;
int main()
{
	string dna;
	cin >> dna;
	int m = INT_MIN;
	int cnt = 1;
	for (int i = 0; i < dna.size() - 1; i++)
	{
		if (dna[i] == dna[i + 1])cnt++;
		else
		{
			cnt > m ? m = cnt : m;
			cnt = 1;
		}
	}
	cnt > m ? m = cnt : m;
	cout << m << endl;
}