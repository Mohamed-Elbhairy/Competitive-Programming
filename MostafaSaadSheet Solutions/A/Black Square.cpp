#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int a, b, c, d; cin >> a >> b >> c >> d;
        string s; cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')ans += a;
            if (s[i] == '2')ans += b;
            if (s[i] == '3')ans += c;
            if (s[i] == '4')ans += d;
        }
        cout << ans << endl;
    }
}