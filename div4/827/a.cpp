#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if(a + b == c) {
		cout << "YES" << endl;
	} else if(a + c == b) {
		cout << "YES" << endl;
	} else if(c + b == a) {
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