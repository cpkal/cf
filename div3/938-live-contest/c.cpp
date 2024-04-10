#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) {
		int n, k; cin >> n >> k; 
		int a[n];
		int f = 0, l = n - 1;
		for(int i = 0; i < n; i++) cin >> a[i];
		int ans = 0;
		while(true) {
			if(a[f] == 0) {
				f += 1;
			}
			if(a[l] == 0) {
				l -= 1;
			}
			if(k == 0) break;
			a[f] -= 1; k--;
			if(k == 0) break;
			a[l] -= 1; k--;
		}
		for(int  i = 0; i < n; i++) {
			if(a[i] <= 0) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}