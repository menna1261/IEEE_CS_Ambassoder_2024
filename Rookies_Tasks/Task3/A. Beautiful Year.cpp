#include <iostream>
#include<vector>
using namespace std;
bool is_dist(vector<int> year) {
    for (int i = 0; i < 4; i++) {
        if ((count(year.begin(), year.end(), year[i]) > 1)) {
            return false;
        }
    }
    return true;
 }

vector<int> toVector(int n) {
    vector<int>y;
    for (int i = 0; i < 4; i++) {
        int ye = n % 10;

        n /= 10;
        y.push_back(ye);

    }
    return y;
}

int nextYear(int year) {
    for (int i = year+1; i <= 9000; i++) {
        if (is_dist(toVector(i))) {
            return i;
       }
    }

}

int main()
{
    
    int year; 
    cin >> year;
    cout << nextYear(year) << endl;
   
    
   


    
}