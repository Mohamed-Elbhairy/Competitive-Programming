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
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
const ll N = 3e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
ll k,n;
vector<ll>arr;
bool can(ll m) {
    int t = k;
    int cur =arr[0], cnt = 1;
    while (1) {
        auto it = lower_bound(all(arr), cur + m);
        if (it == arr.end()||it==arr.begin())break; 
        cur = *it;
        cnt++;
    }
    return cnt >= k; 
}
void solution() {
    cin >> n >> k;
    arr = vector<ll>(n);
    for (auto& i : arr)cin >> i;
    sort(all(arr));
    ll l = 1, r = arr[n - 1] - arr[0];
    //r <<= 1;
    ll ans = -1; 
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (can(mid))ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    cout << ans << endl;
}
int main() {
    B7AIRY
        int t = 1;
    cin >> t; 
    for (int i = 1;i<=t ; i++) {
        solution();
    }
}