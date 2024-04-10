#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) {
		int n, c, d; cin >> n >> c >> d;
		int a[n*n];

		for(int i = 0; i < n*n; i++) {
			cin >> a[i];
		}

		sort(a, a + (n*n));

		int dp[n*n];
		dp[0] = a[0];//min square
		for(int i = 1; i < n*n; i++) {
			if(i % n == 0) {
				dp[i] = dp[i-n] + c;
			} else {
				dp[i] = dp[i-1] + d;
			}
		}

		sort(dp, dp + (n*n));
		bool ans = true;
		for(int i = 0; i < n*n; i++) {
			if(a[i] != dp[i]) {
				ans = false;
				break;
			}
		}

		if(ans) {
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}

	}
	return 0;
}