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
    ll l, r; cin >> l >> r;
    for (ll i = l; i <= r; i++) {
        for (ll j = i + 1; j <= r; j++) {
            for (ll k = j + 1; k <= r; k++) {
                if (__gcd(i, j) == 1 && __gcd(j, k) == 1 && __gcd(i, k) != 1) {
                    cout << i << " " << j << " " << k << endl;
                    return 0; 
                }
            }
        }
    }
    cout << -1 << endl;
}