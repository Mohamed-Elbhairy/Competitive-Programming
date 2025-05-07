#include<bits/stdc++.h>
using namespace std;
class SegmentTree {
private:
    vector<int> Seg, Lazy;
    int sz, n;
    void Propegate(int l, int r, int node) { //edit
        /*if (Lazy[node] == -1)return;
        Seg[node] = Lazy[node] *(r-l+1);
        if (l != r) {
            Lazy[2 * node + 1] = Lazy[node];
            Lazy[2 * node + 2] = Lazy[node];

        }
        Lazy[node] = -1;*/
    }
    int Merge(int L ,int R) {
        return L+R ; // edite
    }
    void Update(int l, int r, int node, int lq, int rq, int val) {
        Propegate(l, r, node);
        if (l > rq || r < lq)return;
        if (lq <= l and r <= rq) {
            Lazy[node] = val;
            Propegate(l, r, node);
            return;
        }
        int mid = l + r >> 1;
        Update(l, mid, 2 * node + 1, lq, rq, val);
        Update(mid + 1, r, 2 * node + 2, lq, rq, val);
        Seg[node] = (Seg[node * 2 + 1]+Seg[node * 2 + 2]);
    }
    int Query(int l, int r, int node, int lq, int rq) {
        Propegate(l, r, node);
        if (lq > r || rq < l)return 0;
        if (lq <= l and r <= rq) {
            return Seg[node];
        }
        int mid = l + r >> 1;
        return (Query(l, mid, 2 * node + 1, lq, rq)+ Query(mid + 1, r, 2 * node + 2, lq, rq));
    }

public:
    SegmentTree(int _n) {
        sz = 1;
        while (sz < _n) sz <<= 1;
        Seg = vector<int>(sz << 1);
    //    Lazy = vector<int>(sz << 1,-1); if needed
        n = _n;
    }
    int Query(int l, int r) {

        return Query(0, sz - 1, 0, l, r);
    }

    void Update(int l, int r, int val) {
        Update(0, sz - 1, 0, l, r, val);
    }
};
