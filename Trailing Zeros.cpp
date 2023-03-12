#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int answer = 0;
	while (n > 1)
	{
		n /= 5;
		answer += n;
	}
	cout << answer << endl;
}