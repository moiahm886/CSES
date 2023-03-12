#include<set>
#include<iostream>
using namespace std;
int main()
{
    int tickets, people;
    cin >> tickets >> people;
    multiset<int>ms;
    for (int i = 0; i < tickets; i++)
    {
        int num = 0;
        cin >> num;
        ms.insert(num);
    }
    for (int i = 0; i < people; i++)
    {
        int value = 0;
        cin >> value;
        auto it = ms.lower_bound(value);
        if (ms.count(value))
        {
            cout << value << endl;
            auto t = ms.find(value);
            if (t != ms.end()) {
                ms.erase(t);
            }
        }
        else if (it != ms.begin()) {
            cout << *prev(it) << endl;
            value = *prev(it);
            auto t = ms.find(value);
            if (t != ms.end())ms.erase(t);
        }
        else {
            cout << -1 << endl;
        }
    }

}