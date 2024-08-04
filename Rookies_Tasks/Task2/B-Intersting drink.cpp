#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int low, int high, int x) {
    int result = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) {
            result = mid + 1;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return result;
}

int numOfdays(vector<int>& prices, int d, int n) {
    return binarySearch(prices, 0, n - 1, d);
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());

    int days;
    cin >> days;

    while (days--) {
        int d;
        cin >> d;
        cout << numOfdays(prices, d, n) << endl;
    }

    return 0;
}
