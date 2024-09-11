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
        vector<int>a, b, c;
        for (int i = 0; i < n;i++){
            int x; cin >> x;
            if (x == 1)a.push_back(i + 1);
            if (x == 2)b.push_back(i + 1);
            if (x == 3)c.push_back(i + 1);
        }
        int ans = min({ a.size(),b.size(),c.size() });
        cout << ans << endl;
        for (int i = 0; i < ans; i++)cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
}