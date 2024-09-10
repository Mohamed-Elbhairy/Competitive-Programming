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
vector<int>adj[N];
int vis[N];
ll ans = 1;
ll cnt = 1; 
void bfs(int st) {
    queue<int>q;
    q.push(st);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        vis[node] = 1;
        for (auto& it : adj[node]) {
            if (vis[it])cnt=0;
            else q.push(it);
        }
    }
}
void dfs(int node) {
    vis[node] = 1;
   
    for (auto it : adj[node]) {
       if(!vis[it])dfs(it), ans <<= 1;
    }
}
void solution() {
    int n; cin >> n; 
    int ans = 1; 
    v(int, arr, n); vin(0, n, arr);
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        int  p = arr[i];
        for (int j = i; j < n; j++) {
            if (p >= arr[j])p =arr[j],cnt++;
            else break; 
        }
        p = arr[i];
        for (int j = i - 1; j >= 0; j--) {
            if (p>= arr[j])p = arr[j], cnt++;
            else break;
        }
        ans = max(ans, cnt);
    }
    cout << ans <<endl;
}
int main() {
    B7AIRY
        int t = 1;
   // cin >> t; 
    for (int i = 1;i<=t ; i++) {
        solution();
    }
}