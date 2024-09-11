#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int n; cin >> n;
        int arr[110] = {};
        for (int i = 1; i <= n; i++)cin >> arr[i];
        int m; cin >> m;
        while (m--) {
            int j, i;
            cin >> i >> j;

            arr[i - 1] += j-1;
            arr[i] -= j;
            arr[i + 1] += arr[i];
            arr[i] = 0;
        }
        for (int i = 1; i <= n; i++)cout << arr[i] << endl;
    }
}