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
        int m = n;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            arr[x] = 1;
            while(arr[m])cout << m--<<" ";
            cout << endl;
        }
    }
}