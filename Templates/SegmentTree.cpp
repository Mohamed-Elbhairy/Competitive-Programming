#include <bits/stdc++.h>
using namespace std;
class SegmentTree {
private:
    struct Node {
        Node(int val) {}
        Node() {}
    };
    vector< Node > Seg;
    int Size, n, Skip;

    Node Merge(const Node &L, const Node &R) {
        Node node;
        // opration
        return node;
    }
    void Update(int l, int r, int node, int idx, int val) {
        if ( l == r ) {
            // opration
            return;
        }
        int mid = (l + r) / 2;

        if ( idx <= mid )
            Update(l, mid, 2 * node + 1, idx, val);
        else
            Update(mid + 1, r, 2 * node + 2, idx, val);

        Seg[node] = Merge(Seg[node * 2 + 1], Seg[node * 2 + 2]);
    }
    Node Query(int l, int r, int node, int lq, int rq) {
        if ( lq > r || rq < l )
            return Node(Skip);
        if ( lq <= l && rq >= r )
            return Seg[node];
        int mid = (l + r) / 2;
        return Merge(Query(l, mid, 2 * node + 1, lq, rq), Query(mid + 1, r, 2 * node + 2, lq, rq));
    }
    void Build(int l, int r, int node, vector< int > &v) {
        if ( l == r ) {
            if ( l < v.size() ) {
                // opration
            }
            return;
        }
        int mid = (l + r) / 2;
        Build(l, mid, 2 * node + 1, v);
        Build(mid + 1, r, 2 * node + 2, v);
        Seg[node] = Merge(Seg[node * 2 + 1], Seg[node * 2 + 2]);
    }

public:
    SegmentTree(int _n, int _Skip) {
        Size = 4 * _n;
        Skip = _Skip;
        Seg = vector< Node >(Size, Node(Skip));
        n = _n;
    }
    SegmentTree(vector< int > &v, int _Skip) {
        n = v.size();
        Skip = _Skip;
        Size = 4 * n;
        Seg = vector< Node >(Size, Node(Skip));
        Build(0, n - 1, 0, v);
    }
    int Query(int l, int r) {
        // return Query(0, n - 1, 0, l, r);
    }
    void Update(int l, int r, int val) { Update(0, Size - 1, 0, r, val); }
};
