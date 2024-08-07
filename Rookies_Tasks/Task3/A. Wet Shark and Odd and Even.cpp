
#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
ll even_Sum(ll arr[],int n) {

	ll sum = 0;
	for (ll i = 0; i < n; i++) {
		sum += arr[i];
	}
	if (sum % 2 == 0) {
		return sum;
	}
	else
	{
		vector<ll>odd;
		for (ll i = 0; i < n; i++) {
			if (arr[i] % 2 != 0) {
				odd.push_back(arr[i]);
			}
		}
		ll mini_odd = *min_element(odd.begin(), odd.end());
		return sum - mini_odd;

	}

}

int main()
{

	int  n; cin >> n;
	ll* arr = new ll[n];

	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << even_Sum(arr, n);
	
}
