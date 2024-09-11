#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        for (int i = 1; i < n; i++)ans += (s[i] == s[i - 1]);
        cout << ans << endl;
    }
}