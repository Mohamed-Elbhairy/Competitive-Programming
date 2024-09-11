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
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
void solution() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    vector<int> c(n + 1);
    vector<int> ans(n + 1, -1);
    string s;
    int comp = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cin >> s;
    for (int i = 1; i <= n; i++) {
        c[i] = (s[i - 1] == '0');
    }
    for (int i = 1; i <= n; i++) {
        if (ans[i] != -1) continue;
        int cur = i;
        vector<int> temp;
        while (ans[cur] == -1) {
            temp.push_back(cur);
            ans[cur] = 0;
            cur = arr[cur];
            comp++;
        }
        int cnt = 0;
        for (auto it : temp) {
            cnt += c[it];
            //comp++;
        }
        for (auto it : temp) {
            ans[it] = cnt;
            //comp++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    //cout << "time : " << comp << " \n";
}
int main() {
    B7AIRY
        int t = 1;
     cin >> t;

    for (int i = 1; i <= t; i++) {
        solution();
    }
}