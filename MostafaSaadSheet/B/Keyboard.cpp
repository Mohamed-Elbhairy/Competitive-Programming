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
double dis(double x1, double y1, double x2, double y2)
{
    double x = x1 - x2; 
    double y = y1 - y2;
    double dist;
    dist = pow(x, 2) + pow(y, 2);  
    dist = sqrt(dist);
    return dist;
}
void solution() {
    int n, m,x,q; cin >> n >> m>>x;
   vector<vector<pair<int,int>>>mp(255);
    vector<int>preans(255, -1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            char c; cin >> c;
            mp[c].push_back({ i,j });
        }
    }
    ll ans = 0;
    cin >> q;
    while (q--) {
        char c; cin >> c;
        
        if (mp[tolower(c)].empty()) {
           
            cout << -1 << endl; return;
        }
        if (islower(c))continue;
        if (preans[c] == -1) {
            double d = 1e9;
            for (auto it : mp[tolower(c)]) {
                if (mp['S'].empty()) {
                    cout << -1 << endl; return;
                }
                for (auto it1 : mp['S']) {
                    d = min(d, dis(it.first, it.second, it1.first, it1.second));
                }
            }
            preans[c] = 0;
            if (d > x) {
                ans++; preans[c] = 1;
            }
            
        }
        else ans += preans[c];
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