#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		int n; cin >> n;

		string s1;
		string s2;

		cin >> s1 >> s2;

		int cond = 1;

		for(int i = 0; i < n; i++) {
			if(s1[i] == 'R' && s2[i] == 'B') {
				cond = 0;
				break;
			} 

			if(s1[i] == 'B' && s2[i] == 'R') {
				cond = 0;
				break;
			} 

			if(s1[i] == 'R' && s2[i] == 'G') {
				cond = 0;
				break;
			} 

			if(s1[i] == 'G' && s2[i] == 'R') {
				cond = 0;
				break;
			} 
		}

		if(cond == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}