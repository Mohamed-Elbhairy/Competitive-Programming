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
    cin >> tc;
    ll ans = 0; 
    while (tc--) {
        string s; cin >> s;
        if (s == "Icosahedron") {
            ans += 20;
        }
        else if (s == "Cube") {
            ans += 6;

        }
        else if (s == "Tetrahedron") {
            ans += 4;
        }
        else if (s == "Dodecahedron") {
            ans += 12;
        }
        else {
            ans += 8;
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