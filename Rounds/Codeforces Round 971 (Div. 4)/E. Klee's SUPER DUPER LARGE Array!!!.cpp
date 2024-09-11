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
#define ull unsigned long long
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
ll n, k;
ull can(ll mid) {
    ll sum1 = mid * k + (mid * (mid - 1)) / 2;
    ll sum2 = (n - mid) * (k + mid) + ((n - mid) * (n - mid - 1)) / 2;
    return abs(sum1 - sum2);
}
void solution() {
    cin >> n >> k;
    ll l = 1, r = n;
    ull ans = LLONG_MAX;
    while (l <= r) {
        ll mid1 = l + (r - l) / 3;
        ll mid2 = r - (r - l) / 3;
        ull t1 = can(mid1);
        ull t2 = can(mid2);
        ans = min({ ans, t1, t2 });
        if (t1 < t2)  r = mid2 - 1;
        else l = mid1 + 1;
    }

    cout << ans << endl;
}
int main() {
    B7AIRY
        int t = 1;
     cin >> t;
    for (int i = 1; i <= t; i++) {
        solution();
    }
}