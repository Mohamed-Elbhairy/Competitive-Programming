#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int ll 
#define endl "\n"
signed main() {
    IOFaster int tc = 1;
    // cin >> tc;
    while (tc--) {
        string s, s1; cin >> s >> s1;
        int n = s.size(), m = s1.size(), i = 0, j = 0;
        if (s == s1) {
            cout << -1 << endl; return 0;
        }
        cout << max(s.size(), s1.size());

    }
}