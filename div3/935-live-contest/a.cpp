#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		int i, e, u, tents = 0;

		cin >> i >> e >> u;

		if(i > 0) {
			tents += i;
		}

		//remainder
		int rte = e % 3; //butuh kelipatan 3 si e
		if(rte > 0) {
			if(rte == 2) {
				e++;
				u--;
			}

			if(rte == 1) {
				e += 2;
				u -= 2;
			}

		}

		tents += (e/3);

		if(u > 0 && u < 2) {
			tents += 1;
		} else {
			int rtu = u % 3;

			tents += (u/3);

			if(rtu > 0) {
				tents += 1;
			}
		}

		if(u < 0) {
			cout << -1 << endl;
		} else {
			cout << tents << endl;
		}
	}

	return 0;
}