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
	
		bool ans = true;
		if(a[1] - a[0] == c && a[(n*n) - 1] - a[(n*n) - 2] == c) {
			for(int i = 2; i < (n * n) - 1; i++) {
				if(a[i] - a[i - 1] != d - c) {
					ans = false;
					break;
				}  
			}
		} else {
			ans = false;
		}

		if(ans) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;	
		}

	}
	return 0;
}