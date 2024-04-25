#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        long long k; cin >> k;
        deque<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        while(k && a.size() > 1) {
            int m = min(a.front(), a.back());
            if(k >= 2*m) {
                a.front()-=m;
                a.back()-=m;
                k-=(2*m);
            } else {
                a.front() -= (k/2) + (k%2);
                a.back() -= k/2;
                k = 0;
            }
            
            if(a.front() == 0) a.pop_front();
            if(a.back() == 0) a.pop_back();
        }
        int ans = n-a.size();
        cout << ans + (a.size() && a.front() <= k) << '\n';
    }

    return 0;
}
