#include <bits/stdc++.h>

using namespace std;

bool isBinary(const std::string& str) {
  for (char c : str) {
    if (c != '0' && c != '1') {
      return false;
    }
  }
  return true;
}

void solve() {
	int n; cin >> n;
	if(n == 0 || n == 1) {
		cout << "YES" << endl;
	} else {
		bool isb;
		int d = n;
		for(int i = 0; i < n; i++) {
			if(d % 11 == 0) {
				d = d / 11;
			} else {
				isb = isBinary(to_string(d));
				break;
			}
		}
		if(isb) {
			cout << "YES" << endl;
		} else {
			isb = isBinary(to_string(n));
			if(isb) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}