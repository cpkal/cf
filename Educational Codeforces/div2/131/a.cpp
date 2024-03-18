#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		vector<int> m(4);

		cin >> m[0] >> m[1];
		cin >> m[2] >> m[3];

		if(m[0] == 1 && m[1] == 1 && m[2] == 1 && m[3] == 1) {
			cout << 2 << endl;
		} else if(m[0] == 0 && m[1] == 0 && m[2] == 0 && m[3] == 0) {
			cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}
	}

	return 0;
}