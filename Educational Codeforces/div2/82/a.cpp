#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	if(s.size() == 0) {
		cout << '0' << endl;
	}else {
		int ans = 0, oc = 0;
		for(int i = 0; i <= s.size(); i++) {
			if(s[i] == '1') {
				for(int  j = i + 1; j < s.size(); j++) {
					if(s[j] == '0') {
						ans++;
					} else {
						// cout  << i << endl;
						i = j;
						break;
					}
				}
				oc++;
			}
		}
		if(oc <= 1) {
			cout << '0' << endl;
		} else {
			cout << ans << endl;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}