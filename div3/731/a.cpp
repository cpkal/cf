#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tt; cin >> tt;
	while(tt--) {
		int c[3][2];
		for(int i = 0; i < 3; i++) {
			cin >> c[i][0] >> c[i][1];
		}
		int ans = 0;
		if(c[2][0] > c[1][0] && c[2][0] > c[0][0] || c[2][0] < c[1][0] && c[2][0] < c[0][0] || c[2][1] > c[1][1] && c[2][1] > c[0][1] || c[2][1] < c[1][1] && c[2][1] < c[0][1]){
			ans += abs(c[0][0]-c[1][0]) + abs(c[0][1]-c[1][1]);
		} else {
			if(c[0][0] == c[1][0] && c[0][0] == c[2][0]){
				ans += abs(c[0][1]-c[1][1])+2;
			} else if(c[0][1] == c[1][1] && c[2][1]) {
				ans += abs(c[0][0]-c[1][0])+2;
			} else {
				ans += abs(c[0][0]-c[1][0]) + abs(c[0][1]-c[1][1]);
			}
		}
		
		cout << ans << "\n";
	}
	return 0;
}