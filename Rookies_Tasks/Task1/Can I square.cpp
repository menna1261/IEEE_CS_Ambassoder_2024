#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool hasIntegerSquareRoot(long long num) {
    if (num < 0) {
        return false;
    }

    long long root = static_cast<long long>(sqrt(num));
    return root * root == num;
}

string canBuildSquare(const vector<long long>& nums) {
    long long sum = 0;
    for (long long num : nums) {
        sum += num;
    }
    return hasIntegerSquareRoot(sum) ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << canBuildSquare(nums) << endl;
    }

    return 0;
}
