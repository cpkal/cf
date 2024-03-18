#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		string exp; cin >> exp;
		int a = exp[0] - '0';
		int b = exp[2] - '0';

		cout << a + b << endl;
	}

	return 0;
}