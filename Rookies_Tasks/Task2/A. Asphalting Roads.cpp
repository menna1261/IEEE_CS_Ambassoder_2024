#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool existsIn_H(const vector<int>& h, int target) {
    return find(h.begin(), h.end(), target) != h.end();
}

bool existsIn_V(const vector<int>& v, int target) {
    return find(v.begin(), v.end(), target) != v.end();
}

void asphalted(int n, vector<pair<int, int>>& p) {
    vector<int> h; 
    vector<int> v; 
    int counter = 0;

    for (int j = 0; j < p.size(); j++) {
        int row = p[j].first;
        int col = p[j].second;

        if (!existsIn_H(h, row) && !existsIn_V(v, col)) {
            h.push_back(row);
            v.push_back(col);
            cout << j + 1 << " "; 
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n * n);

    for (int i = 0; i < n * n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    asphalted(n, p);

    return 0;
}
