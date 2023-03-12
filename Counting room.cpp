#include <iostream>
#include <vector>

using namespace std;

struct room {
    char c;
    bool used;
};

int countroom(int m, int n, int i, int j, vector<vector<room>>& v) {
    if (i < 0 || i >= m || j < 0 || j >= n) {
        return 0;
    }
    if (v[i][j].used) {
        return 0;
    }
    v[i][j].used = true;
    countroom(m, n, i, j + 1, v);
    countroom(m, n, i, j - 1, v);
    countroom(m, n, i + 1, j, v);
    countroom(m, n, i - 1, j, v);

    return 1;
}

int main() {
    int m, n;
    int count = 1;
    while (cin >> m && cin >> n) {
        vector<vector<room>> v;

        for (int i = 0; i < m; i++) {
            vector<room> temp;
            for (int i = 0; i < n; i++) {
                char c;
                cin >> c;
                room r;
                r.c = c;
                r.used = (c == '#');
                temp.push_back(r);
            }
            v.push_back(temp);
        }

        int rooms = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rooms += countroom(m, n, i, j, v);
            }
        }

        cout << rooms << endl;
    }
}