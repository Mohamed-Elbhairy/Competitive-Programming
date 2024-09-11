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
void solution() {
    int a1, b1, a2, b2; cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;
    vector<pair<int, int>> vp = { {a1, a2}, {a2, a1} };
    vector<pair<int, int>> vp1 = { {b1, b2} ,  { b2, b1 } };
    for (auto i : vp) {
        for (auto j : vp1) {
            int cnt = 0, cnt1 = 0;
            if (i.first < j.first) cnt1++;
            if (i.second < j.second) cnt1++;
            if (i.first > j.first) cnt++;
            if (i.second > j.second) cnt++;
            if (cnt > cnt1) ans++;
        }
    }
    cout << ans << endl;
}
int main() {
    B7AIRY
        int t = 1;
    cin >> t;
    while (t--) solution();
}
