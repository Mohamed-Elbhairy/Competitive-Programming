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
        vector<string>arr(n);
        for (auto& i : arr)cin >> i;
        int ans = 1; 
        for (int i = 1; i < n; i++) {
            if (arr[i][0] == arr[i - 1][1])ans++;
        }
        cout << ans << endl;
    }
}