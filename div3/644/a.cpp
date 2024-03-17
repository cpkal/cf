#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;
	int ans;

	while(tt--) {
		int a, b;
		cin >> a >> b;

		ans = pow(min(max(2 * b, a), max(2 * a, b)), 2);

		cout << ans << endl;
	}

	return 0;
}