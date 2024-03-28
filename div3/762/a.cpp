#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	if(s.size() % 2 == 1) {
		cout << "NO" << endl;
	} else {
		int m = (s.size()/2) - 1;
		if(s.substr(0,m+1) == s.substr(m+1, s.size()-1)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
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