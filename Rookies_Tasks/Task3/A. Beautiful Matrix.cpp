#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int operations(vector<vector<int>>&m) {
    int i_one = 0;
    int j_one = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (m[i][j] == 1) {
                i_one = i+1;
                j_one = j+1;
                break;
            }
        }
    }
    return abs(i_one - 3) + abs(j_one - 3);

}

int main()
{
    vector<vector<int>>m(5, vector<int>(5));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
        }
    }
    cout << operations(m);
    
}
