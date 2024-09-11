#include <bits/stdc++.h>
#include <algorithm> 
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
#define B7AIRY ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vin(S, E, N) for(int i = S; i < E; i++) cin >> n[i];
#define v(T, NAME, SIZE) deque<T> NAME(SIZE);
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define YES return void(cout << "YES\n")
#define NO return void(cout << "NO\n")
#define ld long double
#define ll long long
#define PI acos(-1)
#define endl "\n"
const ll N = 2e5 + 10, mod = 1e9 + 7;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
vector<ll>arr;
int n;
ll powmod(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1LL)
            res = (res * x) % mod;
        y = y >> 1LL;
        x = (x * x) % mod;
    }
    return res;
}
ll add(ll a, ll b)
{
    return ((a % mod) + (b % mod)) % mod;
}
ll mul(ll a, ll b)
{
    return ((a % mod) * (b % mod)) % mod;
}
ll sub(ll a, ll b)
{
    return ((((a % mod) - (b % mod)) % mod) + mod) % mod;
}
ll divide(ll a, ll b)
{
    return mul(a, powmod(b, mod - 2));
}
ll fun()
{
    ll sum = 0,ans=0;
    for (int i = 0; i < n; i++)
    {
        if (!arr[i])continue;
        ans = add((mul(sum , arr[i])),ans);
        ans %= mod;
        sum = add(sum, arr[i]);
    }
    return ans;
}
void solution() {
    cin >> n;
    arr = vector<ll>(n);
    for(auto &i:arr)cin>>i;
    sort(all(arr));
    ll ans = fun();
    cout << divide(ans,divide(mul(n,n-1),2LL)) << endl;
}
int main() {
    B7AIRY
        int t = 1;
     cin >> t;

    for (int i = 1; i <= t; i++) {
        solution();
    }
}