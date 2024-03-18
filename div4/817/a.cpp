#include <bits/stdc++.h> 

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		int n; cin >> n;

		string s; cin >> s;

		if(n != 5 && s.size() != 5) {
			cout << "NO" << endl;
		} else {
			string x = "Timur";
			sort(s.begin(), s.end());
			sort(x.begin(), x.end());

			if(s == x) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}

	return 0;
}