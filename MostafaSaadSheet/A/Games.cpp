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
        vector<pair<int, int>>arr(n);
        for (auto& i : arr)cin >> i.first >> i.second;
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (arr[i].first == arr[j].second)ans++;
                }
            }
        }
        cout << ans << endl;
    }
}