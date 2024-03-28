#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	set<int> r;
	for(int i = 1; pow(i, 2) <= n; i++) r.insert(pow(i, 2));
	for(int i = 1; pow(i, 3) <= n; i++) r.insert(pow(i, 3));
	cout << r.size() << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}