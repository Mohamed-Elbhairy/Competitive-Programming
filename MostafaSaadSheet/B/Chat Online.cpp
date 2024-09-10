#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
#define B7AIRY ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vin(S, E, N) for(int i = S; i < E; i++) cin >> N[i];
#define v(T, NAME, SIZE) deque<T> NAME(SIZE);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define YES return void(cout << "YES\n")
#define NO return void(cout << "NO\n")
#define RN1 return void(cout << "-1\n")
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
void solution() {
    int n, m, l, r; cin >> n >> m>> l >> r;
    vector<pair<int, int>>arr(n), arr1(m);
    for (auto& i : arr)cin >> i.first >> i.second;
    for (auto& i : arr1)cin >> i.first >> i.second;
    ll ans = 0;
    for (int t = l; t <= r; t++) {
         bool x = 0;
        for (int i = 0; i < n&&!x; i++) {
            for (int j = 0; j < m&&!x; j++) {
                int L = max(arr[i].first, arr1[j].first+t);
                int R = min(arr[i].second, arr1[j].second+t); 
                x |= R-L+1>0;
            }
        }
        ans += x;
    }
    cout << ans << endl;
   
}
int main() {
    B7AIRY
        int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        solution();
    }
}