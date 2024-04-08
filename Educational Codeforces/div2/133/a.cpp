#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        if(n == 1) {
            cout << 2 << endl;
        } else if(n == 2) {
            cout << 1 << endl;
        } else if(n % 3 == 0) {
            cout << n / 3 << endl;
        } else if(n % 3 == 2 || n % 3 == 1) {
            cout << (n / 3) + 1 << endl;
        }
    }
    return 0;
}
