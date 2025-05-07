#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <unordered_map>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree< int, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update > // set
typedef tree< int, null_type, less_equal< int >, rb_tree_tag, tree_order_statistics_node_update > ordered_multiset;
#pragma GCC optimize("Ofast")
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define YES return void(cout << "YES\n")
#define NO return void(cout << "NO\n")
#define RN1 return void(cout << "-1\n")
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
#define int ll
#define vi vector< int >
#define pl pair< int, int >
#define vpl vector< pl >
#define vvi vector< vi >
const ll N = 3e5 + 5, mod = 1e9 + 7, Log = 30;
const int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int dy[] = {0, 0, 1, -1, 1, 1, -1, -1};
void B7AIRY() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef ONLINE_JUDGE
    freopen("robots.in", "r", stdin);
#endif
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
}
void solution() { ; }
signed main() {
    B7AIRY();
    int t = 1;
    cin >> t;
    for ( int i = 1; i <= t; i++ ) {
        //   cout<< "case #" << i << ":\n";
        solution();
    }
}

