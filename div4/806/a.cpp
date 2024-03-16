#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
   	cin.tie(0);

   	string s;
   	int tt;

   	cin >> tt;

   	while(tt--) {
   		cin >> s;

   		for(int i = 0; i < s.size(); i++) {
   			if(i == 0) {	
   				if(s[i] != 'y' && s[i] != 'Y') {
   					cout << "NO" << endl;
   					break;
   				}
   			} else if(i == 1) {
   				if(s[i] != 'e' && s[i] != 'E') {
   					cout << "NO" << endl;
   					break;
   				}
   			} else if(i == 2) {
   				if(s[i] != 's' && s[i] != 'S') {
   					cout << "NO" << endl;
   					break;
   				}
   			}

   			if(i == s.size() - 1) {
   				cout << "YES" << endl;
   			}
   		}
   	}

	return 0;
}