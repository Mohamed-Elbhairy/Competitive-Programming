#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
// #pragma GCC optimize("Ofast")

#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

#define ll long long
#define int ll
#define vi vector< ll >
#define pl pair< int, int >
#define vpl vector< pl >
#define ordered_set tree< int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update >

const int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int mod = 1e9+7 , N = 1e5 , OO = 1e18;
int fun(int mask , int a , int i ,int j) {
    if (mask&1)i=-i;
    if (mask&2)j=-j;
    if (mask&4)a=-a;
    return a+j+i;
}
signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc; cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vi masks(8,-OO);
        vector< vi > v(n, vi(n));
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; ++j ) {
                int X;
                cin >> X;
                v[i][j] = X;
                for ( int mask = 0; mask < 8; ++mask ) {
                    masks[mask] = max(fun(mask, X, i, j), masks[mask]);
                }
            }
        }
        int ans = 0;
        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; ++j ) {
                int mx = -OO;
                for ( int mask = 0; mask < 8; ++mask ) {
                    int X = v[i][j];
                    mx = max(mx, fun(mask, X, i, j) + masks[mask ^ 7]);
                }
                ans += mx;
            }
        }
        cout << ans << '\n';
    }
}
