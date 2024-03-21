#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tt; cin >> tt;

	while(tt--) {
		int n; cin >> n;
		string s; cin >> s;

		for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'L' && s[i + 1] == 'R') {
				cout << "LR";
			}

			if(s[i] == 'U') {
				cout << 'D';
			}

			if(s[i] == 'D') {
				cout << 'U';
			}
		}
		cout << endl;
	}

	return 0;
}