#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;
	while(tt--) {
		int n, m, ans = 0;	
		cin >> n >> m;
		vector<vector<char>> cc;
		vector<char> c;

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				char ci;
				cin >> ci;
				c.push_back(ci);
			}
			cc.push_back(c);
		}

		for(int i = 0; i < n; i++) {
			auto it = find(cc[i].begin(), cc[i].end(), 'v');	
		}
	}

	return 0;
}