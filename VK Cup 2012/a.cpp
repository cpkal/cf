#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, ans = 0;
	cin >> n >> k;

	vector<int> a(n);

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int kV = a[k - 1];

	for(int i = 0; i < n; i++) {
		if(a[i] >= kV && a[i] != 0) {
			ans++;
		}
	}

	cout << ans;

	return 0;
}