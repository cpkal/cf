#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        string s; cin >> s;
        if(s == "bca" || s == "cab") {
            cout << "NO\n"; 
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
