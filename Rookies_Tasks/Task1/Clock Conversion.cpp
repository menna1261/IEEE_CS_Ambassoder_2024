#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string convertTo12HourFormat(const string& time24) {
    int hours = stoi(time24.substr(0, 2));
    string minutes = time24.substr(3, 2);

    string period;
    if (hours >= 12) {
        period = "PM";
        if (hours > 12) {
            hours -= 12;
        }
    }
    else {
        period = "AM";
        if (hours == 0) {
            hours = 12;
        }
    }

  
    stringstream ss;
    ss << setw(2) << setfill('0') << hours;
    string hours12 = ss.str();

   
    return hours12 + ":" + minutes + " " + period;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string time24;
        getline(cin, time24);
        cout << convertTo12HourFormat(time24) << endl;
    }

    return 0;
}
