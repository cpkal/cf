#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) {
		int n, a, b; cin >> n >> a >> b;
		int mx = min(2*a, b);
		if(n % 2 == 0) {
			cout << mx * (n / 2) << endl;
		} else {
			cout << (mx * (n / 2)) + a << endl;
		}
	}
	return 0;
}