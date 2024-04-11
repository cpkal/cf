#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int ans = 0;
        int x; cin >> x;
        string s; cin >> s;
        for(int i  = 0; i < x - 2; i++) {
            if(s.substr(i, 3) == "map" || s.substr(i, 3) == "pie") {
                if(s.substr(i, 5) == "mapie" || s.substr(i, 5) == "piemap") {
                } else {
                    ans++;
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
