
#include <iostream>
using namespace std;

int main()
{  
	int p, r;
	cin >> p>>r;
	int k = 1; 

	while (true) {
		int total_cost = k * p;
		if (total_cost % 10 == 0 || total_cost % 10 == r) {
			cout << k;
			break;
		}
		k++;

	}

	
}
