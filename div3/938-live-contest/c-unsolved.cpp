#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int l = 0;
        int r = n - 1;
        while(k > 0 && (l != r)) {
            int m = min(a[l], a[r]);
            if(k>=2*m) {
                a[l]-=m;
                a[r]-=m;
                k-=(2*m);
            } else {
                a[l] -= k / 2 + k % 2;
                a[r] -= k / 2;
                k=0;
            }
            
            if(a[l] == 0) ++l;
            if(a[r] == 0) ++r;
        }
  
        int ans = 0;
        for(int i = 0; i < n; i++) if(a[i] <= 0) ans++;
        cout << ans << endl;
    }

    return 0;
}
