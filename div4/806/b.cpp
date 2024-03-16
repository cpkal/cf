#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (exists.find(s[i]) == exists.end()) {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   string s;
   int tt, n;

   int tb = 0;
   string rds;

   cin >> tt;

   while(tt--) {
      cin >> n;
      cin >> s;

      int index = 0;

      rds = removeDuplicates(s, n);

      int ans = (rds.size() * 2) + (n - rds.size());

      cout << ans << endl;
   }

   return 0;
}
