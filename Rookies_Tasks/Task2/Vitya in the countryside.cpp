#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sizes(n);
    for (int i = 0; i < n; i++) {
        cin >> sizes[i];
    }

    if (n == 1) {
      
        cout << -1 << endl;
        return 0;
    }

   
    int last = sizes[n - 1];
    int second_last = sizes[n - 2];

    if (last == 15) {
        cout << "DOWN" << endl;
    }
    else if (last == 0) {
        cout << "UP" << endl;
    }
    else {
        if (last > second_last) {
            cout << "UP" << endl;
        }
        else if (last < second_last) {
            cout << "DOWN" << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}