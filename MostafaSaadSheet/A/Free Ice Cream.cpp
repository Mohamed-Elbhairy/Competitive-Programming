#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        ll n, x; cin >> n >> x;
        int cnt = 0;
        while (n--) {
            char c; cin >> c;
            int x1; cin >> x1;
            if (c == '+') {
                x += x1;
            }
            else {
                if (x1 > x)cnt++;
                else x -= x1;
            }
        }
        cout << x << " " << cnt << endl;
    }
}