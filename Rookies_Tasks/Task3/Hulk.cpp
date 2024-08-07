
#include <iostream>
using namespace std;
string love_or_hate(int n) {
    if (n % 2 == 0) {
        return "I love that ";
    }
    else if (n % 2 != 0) {
        return "I hate that ";
    }

}

string last(int n) {
    if (n % 2 == 0) {
        return "I love it ";
    }
    else if (n % 2 != 0) {
        return "I hate it ";
    }
}

string Hulk(int n) {
    string res = "";
    for (int i = 1; i < n; i++) {
        res += love_or_hate(i);

    }
    res += last(n);
    return res;
}



int main()
{
    
        int n; cin >> n;
        cout << Hulk(n);
    
}

