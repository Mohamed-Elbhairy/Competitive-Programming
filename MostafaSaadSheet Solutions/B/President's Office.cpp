#include <bits/stdc++.h>
#include <algorithm> 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
#define B7AIRY ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vin(S, E, N) for(int i = S; i < E; i++) cin >> n[i];
#define v(T, NAME, SIZE) deque<T> NAME(SIZE);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define YES return void(cout << "YES\n")
#define NO return void(cout << "NO\n")
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
void solution() {
    int n, m; char c; cin >> n >> m >> c; int ans = 0;
    char arr[101][101];
    map<char, bool>vis;
    int x = 0,y=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    //cout << c << endl;
    vis[c] = 1;
    vis['.'] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == c) {
                if (i + 1 < n && !vis[arr[i + 1][j]]) {
                    ans++, vis[arr[i + 1][j]] = 1;
                    //cout << 1 << endl;
                }
                if (i - 1 >= 0 && !vis[arr[i - 1][j]]) {
                    ans++, vis[arr[i - 1][j]] = 1;
                }
                if (j + 1 < m && !vis[arr[i][j + 1]]) {
                    ans++, vis[arr[i][j + 1]] = 1;
                    //cout << 3 << endl;
                }
                if (j - 1 >= 0 && !vis[arr[i][j - 1]]) {
                    ans++, vis[arr[i][j - 1]] = 1;
                    //cout << 4 << endl;
                }
            }
        }
    }
    cout << ans << endl;
}
int main() {
    B7AIRY
        int t = 1;
    // cin >> t;

    for (int i = 1; i <= t; i++) {
        solution();
    }
}