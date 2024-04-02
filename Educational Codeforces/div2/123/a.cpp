#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	vector<char> lc;
	if(isupper(s[0])) {
		cout << "NO" << endl;
	} else {
		for(int i=0; i < n; i++) {
			if(islower(s[i])) {
				lc.push_back(s);
			} else {
				
			}
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