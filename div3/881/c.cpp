#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--) {
        long long int n; cin >> n;
        long long int sum = 0;
        while(n / 2 > 0) {
            sum += n;
            n /= 2;
        }
        cout << ++sum << endl;
    }

    return 0;
}
