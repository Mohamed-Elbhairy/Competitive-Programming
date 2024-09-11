#include <bits/stdc++.h>
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
    ll n, m, k, t;
    cin >> n >> m >> k >> t;
    set<ll> mp;
    ll cnt = 0;
    ll a, b;
    while (k--) {
        cin >> a >> b;
        mp.emplace((--a * m) + b);
    }
    while (t--) {
        cin >> a >> b;
        ll x = (--a * m) + b;
        if (mp.count(x))
            cout << "Waste" << endl;
        else {
            auto it = mp.lower_bound(x);
            x -= distance(mp.begin(), it);
            x %= 3;
            if (x == 1) cout << "Carrots" << endl;
            else if (x == 2) cout << "Kiwis" << endl;
            else if (x == 0) cout << "Grapes" << endl;
        }
    }
}
int main() {
    B7AIRY
        int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solution();
    }
}