    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int tt; cin >> tt;
        while(tt--) {
            int a, b, c, n; cin >> a >> b >> c >> n;
            int mx = max({a, b, c});
            int d = 0;
            d += (mx-a);
            d += (mx-b);
            d += (mx-c);
            if(d > n) {
                cout << "NO" << "\n";
            } else {
                if((n - d) % 3 == 0) {
                    cout << "YES" << "\n";
                } else {
                    cout << "NO" << "\n";
                }
            }
        }
        return 0;
    }
