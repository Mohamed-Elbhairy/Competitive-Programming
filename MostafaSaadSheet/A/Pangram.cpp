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
      int  freq[26] = {};
      while (n--) {
          char x; cin >> x;
          x = tolower(x);
          freq[x - 'a']++;
      }
      for (auto i : freq) {
          if (!i) {
              cout << "NO"; return 0 ;
          }
      }
      cout << "YES\n";
    }
}