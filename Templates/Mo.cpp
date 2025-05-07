struct Query {
    int l, r, Q_idx, Blk_idx;
    Query() {}
    Query(int L, int R, int QId) {
        l = L;
        r = R;
        Q_idx = QId;
        Blk_idx = l / SQ;
    }
    bool operator <(const Query& Q)const {
        if (Q.Blk_idx == Blk_idx) {
            return r < Q.r;
        }
        return Blk_idx < Q.Blk_idx;
    }
};
Query queries[N];
int ans[N];
int freq[N], ret, v[N];
int q;
int n;
int k;
void add(int idx) {
    ret -= freq[k ^ v[idx]];
    freq[v[idx]]++;
    ret += freq[k ^ v[idx]];
}
void remove(int idx) {
    ret -= freq[k ^ v[idx]];
    freq[v[idx]]--;
    ret += freq[k ^ v[idx]];
}
void Mo_INIT() {
    int l = 2, r = 1;
    sort(queries, queries + q);
    for (int i = 0; i < q; i++) {
        int L = queries[i].l;
        int R = queries[i].r;
        int Idx = queries[i].Q_idx;
        while (l < L)remove(l++);
        while (l > L)add(--l);
        while (r < R)add(++r);
        while (r > R)remove(r--);
        ans[Idx] = ret;
    }
}
void solution() {
    cin >> n >> q >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        v[i] = (v[i - 1] ^ a[i - 1]);
    }
    freq[0]++;
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;

        queries[i] = Query(l - 1, r, i);
    }
    Mo_INIT();
    for (int i = 0; i < q; i++) {
        cout << ans[i] << '\n';
    }



}