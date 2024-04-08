#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if(a >= x && b >= y) {
            cout << "YES" << endl;
        } else if(a >= x && b < y) {
            if(y - b <= c) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if(a < x && b >= y) {
            if(x - a <= c) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else if(a < x && b < y) {
            int diff = x - a;
            c -= diff;
            if(c < 0) {
                cout << "NO" << endl;
            } else {
                diff = y - b;
                c -= diff;
                if(c < 0) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}
