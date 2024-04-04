#include <bits/stdc++.h>

using namespace std;

void solve() {
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int ca = 1;
	string s; cin >> s;
	int apos = s.find("a");
	if(apos < 0) {
		cout << "NO" << "\n";
	} else {
		int l = apos, r = l;
		while(ca < s.size()) {
			apos = s.find(alphabet[ca]);
			if(apos < 0) {
				break;
			} else if(apos == l-1) {
				l -= 1;
			}else if(apos == r+1) {
				r += 1;
			} else {
				break;
			}
			ca++;
		}
		if(s.size() == 1) {
			cout << "YES" << "\n";
		} else if(ca == s.size()) {
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
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