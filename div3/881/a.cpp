#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int ans = 0;
        int l = 0;
        int r = n - 1;
        while(l < r) {
            ans += (a[r] - a[l]);
            l++;
            r--;
        }
        cout << ans << endl;
    }

    return 0;
}
