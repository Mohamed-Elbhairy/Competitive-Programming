#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int n, k, t, b; cin >> n >> t >> k >> b;
        int t1 = 0, t2 = 0,c1=0,c2=0;
        while (c1 < n) {
            t1++;
            if (t1%t==0)c1 += k;
           
        }
        int x = 1;
        while (c2 < n) {
            t2++;
            if (t2 % t==0)c2 += x * k;
            if (t2 == b)x = 2;
        }
        if (t1 > t2)cout << "YES\n";
        else cout << "NO\n";    
    }
}