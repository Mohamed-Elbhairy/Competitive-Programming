#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int ll 
#define endl "\n"
signed main() {
    IOFaster int tc = 1;
    // cin >> tc;
    int arr[100010] = {};
    while (tc--) {
        int n; cin >> n;
        vector<int>arr(n);
        set<int>st;
        for (auto& i : arr)cin >> i; 
        int mn = *min_element(arr.begin(), arr.end());
        int mx = *max_element(arr.begin(), arr.end());
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            if (arr[i] != mx && arr[i] != mn)ans++;
        }
        cout << ans << endl;
    }
}