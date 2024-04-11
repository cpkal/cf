// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                ans++;
                i+=k - 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
