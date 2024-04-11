// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n, m, k; cin >> n >> m >> k;
        int b[n], c[m];
        
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < m; i++) cin >> c[i];
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(b[i] + c[j] <= k) ans++;
            }
        }
        
        cout << ans << "\n";
    }

    return 0;
}
