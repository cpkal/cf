#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int a[n];
        int op = 0;
        bool ans = true;
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 1; i < n - 1; i++) {
            if(a[i] == 0) continue;
            
            if(a[i-1] * 2 > a[i]) {
                ans = false;
                break;
            } else {
                int op = a[i - 1];
                a[i - 1] -= op;
                a[i] -= (2*op);
                a[i + 1] -= op;
            }
        }

        for(int i = 0; i < n; i++) {
            if(a[i] != 0) {
                ans = false;
                break;
            }
        }
        
        if(ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
