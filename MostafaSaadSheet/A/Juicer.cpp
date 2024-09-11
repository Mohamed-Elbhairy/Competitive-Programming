#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int n,minimumsize,overflowlimit; cin >> n>>minimumsize>>overflowlimit;
        ll j = 0,ans=0;
        while (n--) {
            int x; cin >> x;
            if (x <= minimumsize) {
                j += x;
                if (j > overflowlimit)ans++,j=0;
            }
        }   
        cout << ans << endl;
    }
}