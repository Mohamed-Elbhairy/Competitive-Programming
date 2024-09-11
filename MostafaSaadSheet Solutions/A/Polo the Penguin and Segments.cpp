#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
 int main() {
     IOFaster int tc = 1;
     int n,k; cin >> n>>k;
     ll s = 0; 
     while (n--) {
         int l, r; cin >> l >> r;
         s += r - l + 1;
     }
     if (s % k == 0)cout << 0 << endl;
     else {
         ll t = ((s % k) + k) % k;
         cout << k - t << endl;
     }

}

/*  Think More => Code Faster
        Don't Code a not Easy Problem Before The Get Solution
        Remmember =>  WR ? relax and take it easy Try debug 10 min still wrong => Think New approch
*/
    /*
    record =>
                Start Reading =>
                Start Thinking =>
                Start Codeing =>
                Start Debuging =>
                BUT Their are prograss

    */