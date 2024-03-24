#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int MAXN=2e5+5;
	int n[MAXN];

	int tt; cin >> tt;

	while(tt--) {
		int a; cin >> a;
		
		for(int i = 1; i <= a; i++) {
			cin >> n[i];
		}

		sort(n + 1, n + a + 1);

		int ans = 0;
		for(int i = (a+1)/2; i <= a; i++) {
			if(n[i] == n[(a+1)/2]) ans++;
		}

		cout << ans << endl;
	
	}

	return 0;
}