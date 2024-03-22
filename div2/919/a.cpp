#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;

	while(tt--) {
		int n; cin >> n;
		int lg = 1, rl = 1e9;
		int c = 0;
		vector<int> lti;
		for(int i = 0; i < n; i++) {
			int a, x; cin >> a; cin >> x;
			
			if(a == 1) {
				lg = max(lg, x);
			}

			if(a == 2) {
				rl = min(rl, x);
			}

			if(a == 3) {
				lti.push_back(x);
			}
		}

		for(int i = 0; i < lti.size(); i++) {
			if(lti[i] >= lg && lti[i] <= rl) {
				c++;
			}
		}

		cout << max(rl - lg + 1 - c, 0) << endl;
	}

	return 0;
}