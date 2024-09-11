#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        ll k, r; cin >> k >> r;
       
            ll cnt = 1,cost =0 ;
            while ((k * cnt % 10 && ((k * cnt)-r) %10))cnt++;
            cout << cnt << endl;
            
      
    }
}