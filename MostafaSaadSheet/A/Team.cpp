#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int arr[1001][3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++)cin >> arr[i][j];
        }
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = 0; j < 3; j++)x += arr[i][j];
            if (x >= 2)ans++;
        }
        cout << ans << endl;
    }
}