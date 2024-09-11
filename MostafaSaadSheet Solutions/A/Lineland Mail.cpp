#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int ll 
#define endl "\n"
signed main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int>arr(n);
        for (auto& i : arr)cin >> i;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << abs((arr[i]) - (arr[i + 1])) << " " << abs((arr[i]) - (arr[n - 1])) << endl;
            }
            else if (i == n - 1) {
                cout << abs((arr[i]) - (arr[i - 1])) << " " << abs((arr[0]) - (arr[i])) << endl;
            }
            else {
                ll d1 = abs(arr[i] - arr[i-1]);
                ll d3 = abs(arr[i] - arr[i+1]);
                ll d2 = abs(arr[i] - arr[0]);
                ll d4 = abs(arr[i] - arr[n-1]);
                cout << min({ d1, d2,d3 ,d4}) << " " << max({ d1, d3,d2,d4 }) << endl;
            }
        }

    }
}