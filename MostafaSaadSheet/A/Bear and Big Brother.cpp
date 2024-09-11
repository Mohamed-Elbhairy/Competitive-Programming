#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int a, b; cin >> a >> b;
        int ans = 0; 
        while (a <= b) {
            a *= 3;
            b *= 2;
            ans++;
        }
        cout << ans << endl;
    }
}