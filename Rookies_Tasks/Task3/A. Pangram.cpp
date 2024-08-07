#include <iostream>
#include<cstring>
using namespace std;


string converttoUpper(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;

}
string isPangram(string s) {
    char freq[91] = { '#' };
    string current = converttoUpper(s);
    for (int i = 0; i < current.size(); i++) {
        freq[int(current[i])] = '@';
    }
    for (int i = 65; i <= 90; i++) {
        if (freq[i] != '@') {
            return "NO";
        }
    }
    return"YES";

}


int main()
{
    int n; cin >> n;
    string s; cin >> s;
    cout << isPangram(s);
}
