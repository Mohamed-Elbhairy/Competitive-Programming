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
     int n, k,ans=0; cin >> n >> k;
     while (n--) {
         int a, b; cin >> a >> b;
         if (a == k || b == k || abs(7 - a) == k || abs(7 - b) == k) {
             cout << "NO";
             return 0;
         }
     }
     cout <<"YES" << endl;
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