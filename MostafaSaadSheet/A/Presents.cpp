#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int p[101] = {}, ans[101] = {};
        for (int i = 1; i <= n; i++)cin >> p[i];
        for (int i = 1; i <= n; i++) {
            ans[p[i]] = i;
        }
        for (int i = 1; i <= n; i++)cout << ans[i] << " ";
       

    }
}