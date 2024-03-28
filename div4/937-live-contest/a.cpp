#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;
	if(a < b && b > c) {
		cout << "PEAK" << endl;
	} else if(a < b && b < c) {
		cout << "STAIR" << endl;
	} else {
		cout << "NONE" << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}