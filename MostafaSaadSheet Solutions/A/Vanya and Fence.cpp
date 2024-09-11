#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int ans = 0; 
        int n, h; cin >> n >> h;
        vector<int>arr(n);
        for (auto&i : arr)cin >> i;
        for (auto i : arr) {
            if (i > h)ans += 2;
            else ans++;
        }
        cout << ans << endl;
    }
}