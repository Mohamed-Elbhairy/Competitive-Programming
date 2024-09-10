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
const ll N =1e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
void solution() {
    int n; cin >> n;
    string s; cin >> s;
    deque<char>ans;
    int idx = 0;
    while (ans.size() < n) {
        ans.push_front(s[idx++]);
        if (idx == n)break;
        ans.push_back(s[idx++]);
   }
    if (n & 1)reverse(all(ans));
    for (auto i : ans)cout << i;
}
int main() {
    B7AIRY
        int t = 1;
    //cin >> t; 
    for (int i = 1; i <= t; i++) {
        solution();
    }
}