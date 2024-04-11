// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int a[n];
        int mn = 10;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(a[i], mn);
        }
        
        for(int i = 0; i < n; i++) {
            if(a[i] == mn) {
                a[i] = mn + 1;
                break;
            }
        }
        
        int ans = 1;
        for(int i = 0; i < n; i++) ans *= a[i];
        cout << ans << "\n";
    }

    return 0;
}
