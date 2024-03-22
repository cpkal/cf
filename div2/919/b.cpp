#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;

	while(tt--) {
		int n, k, x; cin >> n >> k >> x;
		vector<int> a;

		for(int i = 0; i < n; i++) {
			int ai; cin >> ai;
			a.push_back(ai);
		}

		sort(a.begin(), a.end());

		int alice = 0;
		int bob = 0;
		for(int i = 0; i < n; i++) {
			if(i <= (n - 1) - x) {
				alice += a[i];
			} else {
				bob += a[i];
			}
		}

		int rAlice = 0;
		if(alice + bob < 0) {
			for(int i = n - 1; i > (n - 1) - x; i--) {
				rAlice += a[i];
				a.pop_back();
			}
		}

		bob = 0;
		for(int i = n - 1; i > (a.size() - 1); i--) {
			bob += a[i];
		}

		cout << alice - bob << endl;
	}

	return 0;
}