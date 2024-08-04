#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countCells(vector<vector<char>>& arr , int r , int c) {

    int cells = 0;
    int R = 0;
    int C = 0 ;
    bool valid_row = true;
    bool valid_col = true;
    for (int i = 0; i < r; i++) {
        valid_row = true;
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 'S') {
                valid_row = false;
            }
               
        }
        if (valid_row) {
            R++;
        }

    }
   // cout << R << endl;
    for (int j = 0; j < c; j++) {
        valid_col = true;
        for (int i = 0; i < r; i++) {
            if (arr[i][j] == 'S') {
                valid_col = false;
            }
              
        }
        if (valid_col) {
            C++;
        }

    }
   // cout << C << endl;
    cells = ((R * c) + (C * r)) - C * R;
    return cells;



}
int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> arr(r, vector<char>(c));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << countCells(arr, r, c);

    return 0;
}
