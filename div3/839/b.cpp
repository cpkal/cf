#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		int m[4] = {};

		cin >> m[0] >> m[1];
		cin >> m[2] >> m[3];

		//find min element
		int min = m[0], min_pos = 0;
		int max = m[0], max_pos = 0;
		for(int i = 1; i < 4; i++) {
			if(min < m[i]) {
				min = m[i];
				min_pos = i;
			}
			if(max > m[i]) {
				max = m[i];
				max_pos = i;
			}
		}

		if(min_pos + max_pos == 3) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}