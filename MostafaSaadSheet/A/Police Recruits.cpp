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
        int ans = 0,s=0;
        while (n--) {
            int x; cin >> x;
            s += x;
            ans = min(ans, s);
        }
        cout << -ans << endl;        
    }
}