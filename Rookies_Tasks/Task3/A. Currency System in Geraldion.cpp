#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> g(n);
    bool one_exists = false;

    for (int i = 0; i < n; i++) {
        cin >> g[i];
        if (g[i] == 1) {
            one_exists = true;
        }
    }

    if (one_exists) {
        cout << -1 << endl;
        return 0;
    }

    sort(g.begin(), g.end());

   
    int smallest_unfortunate_sum = 1;

    for (int i = 0; i < n; i++) {
    
        if (smallest_unfortunate_sum < g[i]) {
            break;
        }
       
        smallest_unfortunate_sum += g[i];
    }

    cout << smallest_unfortunate_sum << endl;

    return 0;
}
