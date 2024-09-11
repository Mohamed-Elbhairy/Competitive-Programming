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
    int n; cin >> n;  
    v(int, arr, n); vin(0, n, arr);
    int q;  cin >> q;
    while (q--) {
        int x; cin >> x; 
        int l = 0, r = n - 1; 
        int ans1 = -1, ans2 = -1 ;
        while (l <= r) {
            int  mid = l + (r - l) / 2; 
            if (arr[mid] > x)ans1 = mid, r = mid - 1;
            else l = mid + 1; 
        }
        l = 0, r = n - 1; 
        while (l <= r) {
            int  mid = l + (r - l) / 2; 
            if (arr[mid] < x)ans2 = mid, l = mid + 1;
            else r = mid - 1; 
        }
        if (ans1 == -1 && ans2 == -1)cout << 'X' << " " << 'X' << endl;
        else if (ans1 == -1)cout << arr[ans2] << " " <<  'X' << endl;
        else if (ans2 == -1) cout << 'X' << " " << arr[ans1] << endl;
        else cout << arr[ans2] << " " << arr[ans1] << endl;
    }
}
int main() {
    B7AIRY
        int t = 1;
   // cin >> t; 
    for (int i = 1;i<=t ; i++) {
        solution();
    }
}