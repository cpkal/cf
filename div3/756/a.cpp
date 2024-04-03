#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	vector<int> d;
	while(tt--) {
		int n; cin >> n;
		if(n % 2 == 0) cout << 0 << "\n";
		if(n % 2 == 1) {
			int f = n;
			bool ie = false;
			while(f >= 10) {
				if((f%10) % 2==0) ie=true;
				f/=10;
			}
			if(f % 2 == 0) cout << 1 << "\n";
			if(f % 2 == 1) {
				if(ie) {
					cout << 2 << "\n";
				} else {
					cout << -1 << "\n";
				}
			}
		}
	}
	return 0;
}