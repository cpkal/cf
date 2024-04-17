#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        int r[n];
        int up = 0;
        for(int i = 0; i < n; i++) {
            cin >> r[i];
            if(r[i] != 2) {
                up+=1;
            } 
        }
        cout << up << endl;
    }

    return 0;
}
