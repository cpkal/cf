#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int bd[31];
        int n; cin >> n;
        for(int i = 2; i < 32; i++) {
            bd[i - 1] = stoi(bitset<5>(i).to_string());
        }
        
        // for(int i = 1; i < 31; i++) {
        //     cout << bd[i] << endl;
        // }
        
        for(int i = 30; i >= 1; i--) {
            while(n % bd[i] == 0) {
                n/=bd[i];
            }
        }
        
        // for(int i = 255; i >= 0; i--) {
        //     while(!(n % bd[i])) {
        //         n /= bd[i];
        //     }
        // }
        
        if(n == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
