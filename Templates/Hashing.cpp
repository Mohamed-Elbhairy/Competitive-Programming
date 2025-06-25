struct Hashing {
private:
    int mod1 = 1e9 + 7, mod2 = 2e9 + 11;
    ll base1, base2, Hash1, Hash2, inv1, inv2, *pw1, *pw2, len;
    vi pre1, pre2;
    deque< char > d;
    ll power(ll a, ll b, ll m) {
        ll ans = 1;
        while ( b > 0 ) {
            if ( b & 1 ) {
                ans = (ans * a) % m;
            }
            a = (a * a) % m;
            b >>= 1;
        }
        return ans;
    }

public:
    Hashing(int sz, ll x = 31, ll y = 37) {
        base1 = x;
        base2 = y;
        Hash1 = Hash2 = len = 0;
        inv1 = power(x, mod1 - 2, mod1);
        inv2 = power(y, mod2 - 2, mod2);
        pw1 = new ll[sz + 1];
        pw2 = new ll[sz + 1];
        pw1[0] = pw2[0] = 1;
        for ( int i = 1; i <= sz; i++ ) {
            pw1[i] = (x * pw1[i - 1]) % mod1;
            pw2[i] = (y * pw2[i - 1]) % mod2;
        }
    }
    Hashing(string &s, int _base1 = 127, int _base2 = 131) {
        len = 0;
        base1 = _base1;
        base2 = _base2;
        pw1 = new ll[s.size() + 1];
        pw2 = new ll[s.size() + 1];
        pw1[0] = pw2[0] = 1;
        Hash1 = Hash2 = 0;
        for ( int i = 1; i < s.size() + 1; i++ ) {
            pw1[i] = (1LL * pw1[i - 1] * base1) % mod1;
            pw2[i] = (1LL * pw2[i - 1] * base2) % mod2;
        }
        pre1 = vi(s.size() + 1);
        pre2 = vi(s.size() + 1);
        for ( int i = 0; i < s.size(); i++ ) {
            Hash1 = (1LL * Hash1 * base1) % mod1;
            Hash2 = (1LL * Hash2 * base2) % mod2;
            Hash1 = (Hash1 + (s[i] - 'a' + 1)) % mod1;
            Hash2 = (Hash2 + (s[i] - 'a' + 1)) % mod2;
            pre1[i] = Hash1;
            pre2[i] = Hash2;
        }
    }
    void push_back(char x) {
        x = x - 'a' + 1;
        Hash1 = (Hash1 * base1) % mod1;
        Hash1 = (Hash1 + x) % mod1;
        Hash2 = (Hash2 * base2) % mod2;
        Hash2 = (Hash2 + x) % mod2;
        len++;
        d.emplace_back(x);
    }
    void push_front(char x) {
        x = x - 'a' + 1;
        Hash1 = (Hash1 + (x * pw1[len]) % mod1) % mod1;
        Hash2 = (Hash2 + (x * pw2[len]) % mod2) % mod2;
        len++;
        d.emplace_front(x);
    }
    void pop_back() {
        if ( len == 0 )
            return;
        char x = d.back();
        d.pop_back();
        Hash1 = (Hash1 - x + mod1) % mod1;
        Hash1 = (Hash1 * inv1) % mod1;
        Hash2 = (Hash2 - x + mod2) % mod2;
        Hash2 = (Hash2 * inv2) % mod2;
        len--;
    }
    void pop_front() {
        if ( len == 0 )
            return;
        char x = d.front();
        d.pop_front();
        len--;
        Hash1 = ((Hash1 - x * pw1[len] % mod1) + mod1) % mod1;
        Hash2 = ((Hash2 - x * pw2[len] % mod2) + mod2) % mod2;
    }
    void clear() {
        Hash1 = Hash2 = len = 0;
        d.clear();
    }
    bool operator==(const Hashing &H) const { return H.Hash1 == Hash1 && H.Hash2 == Hash2; }
    string GetString() { return string(d.begin(), d.end()); }
    pair< int, int > GetHash() { return {Hash1, Hash2}; }
    pair< int, int > GetHash(int l, int r) {
        pair< int, int > ret = {pre1[r], pre2[r]};
        int sz = r - l + 1;
        --l;
        if ( l >= 0 ) {
            ret.first -= (1LL * pre1[l] * pw1[sz]) % mod1;
            if ( ret.first < 0 )
                ret.first += mod1;
            ret.second -= (1LL * pre2[l] * pw2[sz]) % mod2;
            if ( ret.second < 0 )
                ret.second += mod2;
        }
        return ret;
    }
    // bool pal(int l,int r)
    // {
    //     return get(l,r,pre)==get(n-r-1,n-l-1,suf);
    // }
};