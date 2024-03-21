#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;

	while(tt--) {
		int odd = 0, even = 0;
		int n; cin >> n;
		for(int i = 0; i < n; i++) {
			int a; cin >> a;

			if(a % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}

		int ans = min(odd, even);

		cout << ans << endl;
	}

	return 0;
}