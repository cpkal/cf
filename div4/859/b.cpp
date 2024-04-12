#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int a[n];
        int m = 0, b = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] % 2 == 0) {
                m += a[i];
            } else {
                b += a[i];
            }
        }
        
        if(m > b) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
        
    }

    return 0;
}
