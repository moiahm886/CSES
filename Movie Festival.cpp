#include <bits/stdc++.h>
using namespace std;

struct movie {
    int start, end;
};

bool cmp(const movie& a, const movie& b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    vector<movie> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].start >> movies[i].end;
    }
    sort(movies.begin(), movies.end(), cmp);
    int end_time = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (movies[i].start >= end_time) {
            count++;
            end_time = movies[i].end;
        }
    }
    cout << count << endl;
    return 0;
}
