#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; cin >> x;
    int ans = 0;
    if(x >= 5) {
        ans += (x/5);
        x %= 5;
    }
    if(x == 4) {
        ans += (x/4);
        x%=4;
    }
    if(x >= 3) {
        ans += (x/3);
        x%=3;
    }
    if(x == 2) {
        ans += (x/2);
        x%=2;
    }
    if(x == 1) ans += x;
    cout << ans << "\n";
    return 0;
}
