#include <bits/stdc++.h>

using namespace std;

const int N = 10e5 + 20;
vector<int> bd;
bool dp[N];

void solve() {
	bd.push_back(1);
	for(int i = 0; i < bd.size(); i++) {
		if(10 * bd[i] >= N) break;
		bd.push_back(10 * bd[i]);
		bd.push_back(10 * bd[i] + 1);
	}

	dp[1] = 1;
	for(int i = 2; i < N; i++) {
		for(int x:bd) {
			if(i % x == 0) {
				dp[i] = dp[i] | dp[i % x];
			}
		}
	}

	int n;
	cin >> n;
	cout << (dp[n] ? "YES" : "NO") << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}