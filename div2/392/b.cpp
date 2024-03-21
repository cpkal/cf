#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	vector<string> ss;
	vector<int> blb = {0, 0, 0, 0};

	for(int i = 0; i < s.length(); i+=4) {
		int l = s.length() - i;
		cout << l << endl;
		if(l < 4) {
			cout << "yes it is";
		} else {
			ss.push_back(s.substr(i, i + 4));
		}
		
	}

	cout << ss[1];

	for(int i = 0; i < ss.size() - 1; i++) {
		for(int j = 0; j < 4; j++) {
			if(ss[i][j] != ss[i + 1][j] && ss[i][j] == '!') {
				blb[j] = 1;
			}
		}
	}

	for(int i = 0; i < 4; i++) {
		cout << blb[i] << " ";
	}

	return 0;
}