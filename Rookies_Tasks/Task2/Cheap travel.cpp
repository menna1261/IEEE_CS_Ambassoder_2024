#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    
    int cost_single_only = n * a;

   
    int multi_ride_tickets_needed = (n + m - 1) / m;
    int cost_multi_only = multi_ride_tickets_needed * b;

    
    int multi_ride_tickets_to_use = n / m;
    int remaining_rides = n % m;
    int cost_combination = multi_ride_tickets_to_use * b + remaining_rides * a;

    
    int min_cost = min({ cost_single_only, cost_multi_only, cost_combination });

    cout << min_cost << endl;

    return 0;
}
