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
        ll sum1 = 0, sum = 0;
        for (auto& i : arr)cin >> i, sum1 += i;
        sort(arr.rbegin(), arr.rend());
        for (int i = 0; i < n; i++) {
            sum1 -= arr[i];
            sum += arr[i];
            if (sum > sum1) {
                cout << i + 1 << endl; return 0;
            }
        }
        cout << n << endl;
    }
}