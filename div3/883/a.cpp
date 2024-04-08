#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int a, b;
        int cr = 0;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            if(a > b) cr++;
        }
        cout << cr << "\n";
    }

    return 0;
}