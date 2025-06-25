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
            return ((Blk_idx&1)? r < Q.r:r>Q.r);
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

}
void remove(int idx) {

}
void Mo_INIT() {
    int l = 0, r = -1;
    sort(queries, queries + q);
    for (int i = 0; i < q; i++) {
        int L = queries[i].l;
        int R = queries[i].r;
        int Idx = queries[i].Q_idx;
        while (l > L)add(--l);
        while (r < R)add(++r);
        while (l < L)remove(l++);
        while (r > R)remove(r--);
        ans[Idx] = ret;
    }
}
void solution() {
    cin >> n >> q ;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        queries[i] = Query(l - 1, r, i);
    }
    Mo_INIT();
    for (int i = 0; i < q; i++) {
        cout << ans[i] << '\n';
    }
}