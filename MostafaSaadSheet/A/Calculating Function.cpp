#include<bits/stdc++.h>
#include <unordered_map> 
using namespace std;
//==============================================shortcuts================================================================//
#define ll long long 
#define ld long double
#define str string 
#define endl "\n"
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fix(n) fixed << setprecision(n)
#define PI acos(-1) 
#define vin(start,end_,name) for (int i = start; i < end_; i++)cin >> name[i];
#define test  int t ; cin>>t ; while (t --) 
#define v(t,name,size) vector<t>name(size);
#define all(name) name.begin(),name.end()
#define allr(name) name.rbegin(),name.rend()
#define p(t1,t2) pair<t1,t2>
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
//=================================== =========functions================================================================//
vector<pair<ll, ll>> primefactors(ll n) {
    vector<pair<ll, ll>> res;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
            res.push_back({ i, cnt });
        }
    }
    if (n > 1) res.push_back({ n, 1 });

    return res;
}
bool sort_pair(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}
bool isPrime(ll n) {
    if (n % 2 == 0 && n > 2) return false;
    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}
str ToBinary_8(ll n) {
    string s = bitset<32>(n).to_string();
    return s;
}
bool ispalindrom(string s) {
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
        if (s[i] != s[j])
            return false;
    return true;
}
//==========================================================code==================================================//
void solution() {
    ll n; cin >> n; 
    if (n % 2 == 0)cout << n /2 << endl;
    else cout << ((n / 2)+1) * -1 << endl;
}
int main() {
    SPEED
        //test
        solution();
}
