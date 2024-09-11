#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
      return a*(b/gcd(a, b));
}
ll n, m;
vector<int>arr;
ll rec(int i,int cn,ll x, ll c) {
    if (i == 5) {
        if (cn & 1)return -x / c;
        return x / c;
    }
    return rec(i + 1, cn,x,c) + rec(i + 1,cn+1,x, lcm(arr[i], c));
}
int main() {
    IOFaster int tc = 1;
    cin >> tc;
    while (tc--) {
        ll  a, b; cin >> n >> m >> a >> b;
        arr = vector<int>(5);
        for (int i = 0; i < 5; i++)arr[i] = a + (b * i);
        cout << rec(0,0,m,1)-rec(0,0,--n,1) << endl;
    }
}