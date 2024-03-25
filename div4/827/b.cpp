#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n; 
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	int i;
	for(i = 1; i < n; i++) {
		if(a[0] >= a[i]) break;
		if (a[i - 1] == a[i]) break;
	}
	if(i == n) {
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