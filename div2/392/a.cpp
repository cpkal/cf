#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a;

	int h = 0;
	for(int i = 0; i < n; i++) {
		int ai;
		cin >> ai;

		a.push_back(ai);

		if(ai > h) {
			h = ai;
		}
	}

	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += h - a[i];
		
	}

	cout << sum << endl;

	return 0;
}