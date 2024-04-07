#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n, x; cin >> n >> x;
            
        if(n == 1 || n == 2) {
            cout << 1 << endl;
        } else {
            int i;
            for(i = 0;; i++) {
                if(n >= (i * x) + 3 && n <= ((i + 1) * x) + 2) break;
            }
            i+=2;
            cout << i << endl;
        }
    
    }
    return 0;
}