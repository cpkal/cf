#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s; cin >> s;
	int h = stoi(s.substr(0,2));
	string m = s.substr(3,5);
	string hh;

	if(h >= 12) {
		if(h == 12 && stoi(m) <= 59) {
			hh = to_string(abs(h));
		} else {
			hh = to_string(abs(h-12));
		}

		if(hh.size() != 2) {
			hh = "0" + hh;
		}
		cout << hh << ":" << m << " PM" << endl;
	}  else {
		if(s.substr(0, 2) == "00") {
			hh = "12";
		} else {
			hh = to_string(h);
		}
		
		if(hh.size() != 2) {
			hh = "0" + hh;
		}
		cout << hh << ":" << m << " AM" << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}