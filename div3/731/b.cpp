#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	sort(s.begin(), s.end());
	int i;
	for(i = 1; i <= s.size() - 1; i++) {
		if(s[i] - s[i - 1] != 1) break; 
	}
	if(s[0] != 'a') {
		cout << "NO" << endl;
	} else if(i == s.size()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}