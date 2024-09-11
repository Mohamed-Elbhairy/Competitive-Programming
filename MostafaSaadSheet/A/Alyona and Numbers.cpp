#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
 ll sumeven( ll n) {
    if (n % 2 != 0) n--;
    ll sum = n / 2 * (n / 2 + 1);
    return sum;
}
 int main() {
     IOFaster int tc = 1;
     int n, m; cin >> n >> m;
     map<int, ll>mp,mp1;
     ll ans = 0;
     for (int i = 1; i <= m; i++)mp[(i % 5)]++;
     for (int i = 1; i <= n; i++)mp1[(i % 5)]++;
     for (ll i = 0; i < 5; i++) {
         for (ll it = 0; it < 5;it++) {
             if((it+i)%5==0)ans += mp[i] * mp1[it];
         }
     }
     cout << ans << endl;
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