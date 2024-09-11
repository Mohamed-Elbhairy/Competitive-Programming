#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        string s; cin >> s;
        s = 'a' + s;
        int ans = 0; 
        for (int i = 1; i < s.size(); i++) {
            int p1 = s[i] - 'a';
            int p2 = s[i-1] - 'a';
            ans += min((p1 - p2 + 26) % 26, (p2 - p1 + 26) % 26);
        }
        cout << ans << endl;
    }
}