const int N=1e5+5,mod=1e9+7;
bool is_prime(ll n)
{
    if(n==1||n==0)return 0;
    else if(n==2)return 1;
    else if(n%2==0)return 0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
ll gcd(ll a,ll b)
{
    if(a>b) swap(a,b);
    if(a==0)return b;
    return gcd(b%a,a);
}
int lcm(int a,int b)
{
    return a/gcd(a,b)*b;
}
ll power(ll a,ll b)
{
    if(b==0)return 1;
    ll x=power(a,b/2);
    x*=x;
    if(b%2!=0)x*=a;
    return x;
}
vector<bool> isPrime(N,true);
void sieve()
{
    isPrime[0] = false;
    isPrime[1] = false;

    for(ll i=2;i*i<N;i++)
    {
        if(isPrime[i])
        {
            for(ll j=i*i;j<N;j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
}
vector<bool>isPrime(N,1);vector<int>primes;
void linearSieve()
{
    isPrime[0]=isPrime[1]=0;
    for(ll i=2;i<N;i++)
    {
        if(isPrime[i]) primes.push_back(i);
        for(auto it:primes)
        {
            if(i*it>=N) break;
            isPrime[i*it]=0;
            if(i%it==0) break;
        }
    }
}
vector<pair<ll,ll>> primeFactorze(ll n)
{
    vector<pair<ll,ll>> arr;
    for(ll i=2;i*i<=n;i++)
    {
        int w=0;
        while(n%i==0)
        {
            w++;
            n/=i;
        }
        if(w)arr.push_back({i,w});
    }
    if(n>1)arr.push_back({n,1});
    return arr;
}
vector<long long> divisors(long long n)
{
    vector<ll>arr;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if (i * i != n)
            {
                arr.push_back(n / i);
            }
        }
    }
    return arr;
}
ll powmod(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
ll add(ll a,ll b)
{
    return ((a%mod)+(b%mod))%mod;
}
ll mul(ll a,ll b)
{
    return ((a%mod)*(b%mod))%mod;
}
ll sub(ll a,ll b)
{
    return ((((a%mod)-(b%mod))%mod)+mod)%mod;
}
ll divide(ll a,ll b)
{
    return mul(a,powmod(b,mod-2));
}
namespace combinatorics
{
    ll MOD;
    vector<ll> fac, inv, finv;
    ll nCr(ll x, ll y)
    {
        if (x<0 || y>x || y < 0)return(0);
        return(fac[x] * finv[y] % MOD * finv[x - y] % MOD);
    }
    ll nPr(ll x, ll y)
    {
        if (x<0 || y>x || y < 0)return 0;
        return fac[x] * finv[x - y] % MOD;
    }
    ll power(ll b, ll n)
    {
        b %= MOD;
        ll s = 1;
        while (n) {
            if (n % 2 == 1)s = s * b % MOD;
            b = b * b % MOD;
            n /= 2;
        }
        return s;
    }
    void init(int n, ll mod)
    {
        fac.resize(n + 1);
        inv.resize(n + 1);
        finv.resize(n + 1);
        MOD = mod;
        fac[0] = inv[0] = inv[1] = finv[0] = finv[1] = 1;
        for (ll i = 1;i <= n;++i)fac[i] = fac[i - 1] * i % MOD;
        for (ll i = 2;i <= n;++i)inv[i] = MOD - MOD / i * inv[MOD % i] % MOD;
        for (ll i = 2;i <= n;++i)finv[i] = finv[i - 1] * inv[i] % MOD;
    }
    ll mul(ll a, ll b)
    {
        return ((a % MOD) * (b % MOD)) % MOD;
    }
    ll add(ll a, ll b)
    {
        return ((a % MOD) + (b % MOD)) % MOD;
    }
    ll sub(ll a, ll b)
    {
        return (((a - b) % MOD) + MOD) % MOD;
    }
    ll divide(ll a, ll b)
    {
        return mul(a, power(b, MOD - 2));
    }
    ll Inv(int x)
    {
        return power(x, MOD - 2);
    }
    ll catalan(int n)
    {
        return (nCr(2 * n, n) * Inv(n + 1)) % MOD;
    }
    ll StarsAndPars(ll n, ll k)
    {
        return nCr(n + k - 1, k - 1);
    }
};
using namespace combinatorics;
  __int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');

}
bool cmp(__int128 x, __int128 y) { return x > y; }
struct modified_hash {

    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30))
            * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27))
            * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    int operator()(uint64_t x) const
    {
        static const uint64_t random
            = steady_clock::now()
            .time_since_epoch()
            .count();
        return splitmix64(x + random);
    }
};
#define MAXN 1e7 + 1
vector< int > spf(MAXN + 1, 1);
void sieve() {

    spf[0] = 0;
    for ( int i = 2; i <= MAXN; i++ ) {
        if ( spf[i] == 1 ) {

            for ( int j = i; j <= MAXN; j += i ) {
                if ( spf[j] == 1 )
                    spf[j] = i;
            }
        }
    }
}
vector< int > getFactorization(int x) {
    vector< int > ret;
    while ( x != 1 ) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

