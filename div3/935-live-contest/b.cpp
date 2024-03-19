#include <bits/stdc++.h>

using namespace std;

int main() {
	int tt; cin >> tt;

	while(tt--) {
		long long a, b, m;
		cin >> a >> b >> m;

		a  = m / a;
	b = m / b;

		cout << a + b + 2 << endl;
	}
	
	return 0;
}