#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        int diff = 0;
        for(int i = 1; i < s.length(); i++) {
            if(s[i] == '0' && s[i - 1] == '1' || s[i] == '1' && s[i - 1] == '0') {
                diff += 9;
                ++diff;
            } else {
                diff += abs((s[i] - '0') - (s[i - 1] - '0'));
                ++diff;
            }
        }
        cout << ++diff << "\n";
    }

    return 0;
}
