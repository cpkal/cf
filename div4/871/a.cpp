#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        string cf = "codeforces";
        string s; cin >> s;
        int c = 10;
        int ans = 0;
        while(c--) {
            if(s[c] != cf[c]) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
