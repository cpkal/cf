#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	int ct = 0;
	for(int i = 0; i < n * 2; i++) {
		for(int j = 0; j < n; j++) {
			if(ct < 2) {
				if(j % 2 == 0) cout << "##";
				if(j % 2 != 0) cout << "..";
			}

			if(ct >= 2) {
				if(j % 2 == 0) cout << "..";
				if(j % 2 != 0) cout << "##";
			}
		}
		cout << endl;
		ct++;
		if(ct == 4) {
			ct = 0;
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