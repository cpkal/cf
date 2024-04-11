#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) {
		int n, k; cin >> n >> k; 
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l = 0, r = n - 1;
		int ans = 0;
			while(l != r && k > 0) {
				int m = min(a[l], a[r]);
				if(k >= 2 * m) {
					a[l] -= m;
					a[r] -= m;
					k -= (2 * m);
				}

				if(k < 2 * m) {
					a[l] -= k / 2 + k % 2;
					a[r] -= k / 2;
					k = 0;
				}

				if(a[l] == 0) {
					l+=1;
					ans+=1;
				}
				if(a[r] == 0) {
					r-=1;
					ans+=1;
				}

				// if(a[l] > a[r]) {
				// 	k -= a[r] * 2;
				// 	a[l] -= a[r];
				// 	a[r] = 0;
				// 	r--;
				// 	ans++;
				// } else if(a[l] < a[r]) {
				// 	k -= a[l] * 2;
				// 	a[r] -= a[l];
				// 	a[l] = 0;
				// 	l++;
				// 	ans++;
				// 	cout << a[r] << "aright" << endl;
				// } else {
				// 	k -= a[l] + a[r];
				// 	a[l] = 0;
				// 	a[r] = 0;
				// 	l++;
				// 	r++;
				// 	ans+=2;
				// }			
			}
		
		cout << ans << "\n";
	}
	return 0;
}