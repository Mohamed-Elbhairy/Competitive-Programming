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
    ll n, m, k, m1, m2; cin >> n;
    ld r1 = 0;
    ld p1 = 0;
    ld p2 = 1e9;
    while (n--) {
        ld x; cin >> x;
        r1 = max(r1, x);
    }
    cin >> m;
    while (m--) {
        ld x; cin >> x;
        p1 = max(p1, x);
    }
    cin >> k;
    while (k--) {
        ld x; cin >> x;
        p2 = min(p2, x);
    }
    cin >> m1 >> m2;
    ld ans1 = (p1 * m2) / ((m1 * p2) + (m2 * p1));
    ld ans = r1 * sqrtl(ans1);
    cout << fixed << setprecision(6);
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