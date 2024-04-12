#include <bits/stdc++.h>
using namespace std;

int main() {
    // int tt; cin >> tt;
    // while(tt--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = n; i >= 0; i--) {
            for(int j = i - 1; j >= 0; j--) {
                if(a[i] == a[j]) {
                    a[j] = -1;
                }
            }
        }
        int mo = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == -1) mo++;
        }
        cout << n - mo << endl;
        for(int i = 0; i < n; i++) {
            if(a[i] != -1) cout << a[i] << " ";
        }
    // }

    return 0;
}
