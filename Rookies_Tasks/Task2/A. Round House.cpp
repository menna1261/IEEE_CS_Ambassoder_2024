#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;


    int final_position = ((a - 1 + b) % n + n) % n + 1;

    cout << final_position << endl;

    return 0;
}
