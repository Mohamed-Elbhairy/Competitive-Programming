struct Hashing {
private:
    int mod1 = 1e9 + 7, mod2 = 2e9 + 11;
    ll base1, base2, Hash1, Hash2, inv1, inv2, *pw1, *pw2, len;
    vi pre1, pre2;
    deque< char > d;

    ll power(ll a, ll b, ll m) {
        ll ans = 1;
        while ( b > 0 ) {
            if ( b & 1 )
                ans = (ans * a) % m;
            a = (a * a) % m;
            b >>= 1;
        }
        return ans;
    }

    pl uniform_hash(int dgt, int cnt) {
        ll s1 = (pw1[cnt] - 1 + mod1) % mod1;
        s1 = s1 * inv1 % mod1;
        ll s2 = (pw2[cnt] - 1 + mod2) % mod2;
        s2 = s2 * inv2 % mod2;
        return {(dgt * s1 % mod1), (dgt * s2 % mod2)};
    }

public:
    Hashing(int sz, ll x = 31, ll y = 37) {
        base1 = x;
        base2 = y;
        Hash1 = Hash2 = len = 0;
        inv1 = power(base1 - 1, mod1 - 2, mod1);
        inv2 = power(base2 - 1, mod2 - 2, mod2);
        pw1 = new ll[sz + 1];
        pw2 = new ll[sz + 1];
        pw1[0] = pw2[0] = 1;
        for ( int i = 1; i <= sz; i++ ) {
            pw1[i] = (base1 * pw1[i - 1]) % mod1;
            pw2[i] = (base2 * pw2[i - 1]) % mod2;
        }
    }

    Hashing(string &s, int _base1 = 127, int _base2 = 131) : Hashing(( int ) s.size(), _base1, _base2) {
        len = s.size();
        pre1.assign(len + 1, 0);
        pre2.assign(len + 1, 0);
        Hash1 = Hash2 = 0;
        for ( int i = 0; i < ( int ) s.size(); i++ ) {
            Hash1 = (Hash1 * base1 + (s[i] - 'a' + 1)) % mod1;
            Hash2 = (Hash2 * base2 + (s[i] - 'a' + 1)) % mod2;
            pre1[i + 1] = Hash1;
            pre2[i + 1] = Hash2;
        }
    }

    void push_back(char x) {
        x = x - 'a' + 1;
        Hash1 = (Hash1 * base1 + x) % mod1;
        Hash2 = (Hash2 * base2 + x) % mod2;
        len++;
        d.emplace_back(x);
    }
    void push_front(char x) {
        x = x - 'a' + 1;
        Hash1 = (Hash1 + x * pw1[len] % mod1) % mod1;
        Hash2 = (Hash2 + x * pw2[len] % mod2) % mod2;
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
        Hash1 = (Hash1 - x * pw1[len] % mod1 + mod1) % mod1;
        Hash2 = (Hash2 - x * pw2[len] % mod2 + mod2) % mod2;
    }
    void clear() {
        Hash1 = Hash2 = len = 0;
        d.clear();
    }

    pl Merge(pl H1, pl H2, int sz) {
        return {((H1.first * pw1[sz] + H2.first) % mod1), ((H1.second * pw2[sz] + H2.second) % mod2)};
    }

    pair< int, int > GetHash(int l, int r) {
        if ( l < 0 )
            l = 0;
        if ( r < l )
            return {0, 0};
        int sz = r - l + 1;
        ll v1 = (pre1[r + 1] - pre1[l] * pw1[sz]) % mod1;
        if ( v1 < 0 )
            v1 += mod1;
        ll v2 = (pre2[r + 1] - pre2[l] * pw2[sz]) % mod2;
        if ( v2 < 0 )
            v2 += mod2;
        return {(v1), (v2)};
    }

    pl Get(const vi &f) {
        pl H = {0, 0};
        for ( int i = 0; i < 10; ++i ) {
            int cnt = f[i];
            if ( !cnt )
                continue;
            int dgt = i + 1;
            pl block = uniform_hash(dgt, cnt);
            H = Merge(H, block, cnt);
        }
        return H;
    }
    // bool pal(int l,int r)
    // {
    //     return get(l,r,pre)==get(n-r-1,n-l-1,suf);
    // }
};