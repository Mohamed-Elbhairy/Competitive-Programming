#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
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
    IOFaster int tc = 1;
     //cin >> tc;
    while (tc--) {
        ll n, k, odds, evens; cin >> n >> k;
        if (n & 1) {
            odds = (n+1) / 2;
            evens = n - odds;
        }
        else {
            evens = n / 2;
            odds = n - evens;
        }
        if (k <= odds)cout << 2 * k - 1 << endl;
        else cout << (k - odds) * 2 << endl;
    }
}