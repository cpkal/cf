#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	int n;

	while(tt--) {
		cin >> n;
		vector<int> s;

		for(int i = 0; i < n; i++) {
			int si;
			cin >> si;
			s.push_back(si);
		}

		int ts = 10000;

		//minimal diff or can be zero diff
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(i != j) {
					int cs = abs(s[i] - s[j]);

					if(cs < ts) {
						ts = cs;
					}
				}
			}
		}

		int ans = ts;

		cout << ans << endl;
	}

	return 0;
}