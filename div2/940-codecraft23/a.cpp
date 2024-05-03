#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        vector<int> a(101, 0);
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            a[x]++;
        }
        int ans = 0;
        for(int i = 0; i < 101; i++) {
            // cout << a[i] << endl;
            ans += a[i]/3;
        }
        cout << ans << endl;
    }
    return 0;
}
