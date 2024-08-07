#include <iostream>
#include<vector>
using namespace std;

string is_rated(vector<pair<int, int>>& r , int n) {

    for (int i = 0; i < n; i++) {
        if (r[i].first - r[i].second != 0) {
            return "rated";
        }
    }
    for (int i = 1; i < n; i++) {
        if (r[i].first > r[i -1].first) {
            return "unrated";
        }


    }
    return "maybe";

}


int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>>r(n);
    for (int i = 0; i < n; i++) {
        cin >> r[i].first >> r[i].second;
    }
    cout << is_rated(r, n);
}
