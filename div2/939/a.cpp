#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int k,q; cin >> k >> q;
        int a[k], n[q];
        for(int i = 0; i < k; i++) cin >> a[i];
        for(int i = 0; i < q; i++) cin >> n[i];
        vector<int> ans;
        for(int i = 0; i < q; i++) {
            if(n[i] >= a[0]) {
                ans.push_back(a[0]-1);
            } else {
                ans.push_back(n[i]);
            }
        }
        
        for(auto &a : ans) {
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}
