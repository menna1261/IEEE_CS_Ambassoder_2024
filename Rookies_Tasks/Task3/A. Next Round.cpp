#include <iostream>
using namespace std;

int next_round(int arr[], int k, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0 && arr[i] >=arr[k - 1]) {
            cnt++;
        }
    }
    return cnt;
}


int main()
{
    int n, k; cin >> n >>k;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << next_round(arr, k, n);

    
}
