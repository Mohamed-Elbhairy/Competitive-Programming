struct SegmentTree{

    struct Node{
        int Val , Lazy;
        bool IsLazy;
        Node() {  // Edit
            Val = 0 ;
            Lazy = 0 ;
            IsLazy = 0;
        };
        void chang(int X , int l , int r) {  // Edit
            Val ;
            IsLazy=1;
            Lazy;
        }
    };
    vector<Node> Seg ;
    int n ;
    void Propgate(int l , int r , int node ) {
        if (l==r||!Seg[node].IsLazy)return;
        int mid = (l+r)/2;
        Seg[2*node+1].chang(Seg[node].Lazy , l , mid );
        Seg[2*node+2].chang(Seg[node].Lazy , mid+1 , r );
        Seg[node].IsLazy = 0;
        Seg[node].Lazy = 0 ; // Edit
    }
    Node Merge(const Node &L , const Node &R) {
        Node ret ;
        ret.Val  ; // Edit
        return ret ;
    }
    void Update(int l , int r , int node , int lq , int rq , int val) {
        Propgate(l , r , node );
        if (lq<=l and rq>= r) {
            Seg[node].chang(val, l, r);
            return;
        }
        if (l>rq||r<lq)return;
        int mid = (l+r)/2;
        Update(l,mid,2*node+1,lq,rq,val);
        Update(mid+1,r ,2*node+2,lq,rq,val);
        Seg[node]=Merge(Seg[2*node+1],Seg[2*node+2]);
    }
    Node  Query(int l , int r , int node , int lq , int rq) {
        Propgate(l , r , node );
        if (lq<=l and rq>= r) {

            return Seg[node];
        }
        if (l>rq||r<lq)return Node();
        int mid = (l+r)/2;


        return Merge(Query(l,mid,2*node+1,lq,rq),Query(mid+1,r ,2*node+2,lq,rq));
    }
public:
    SegmentTree(int _n) {
        n=_n;
        Seg= vector<Node>(4*n);
    }
    void Update(int l , int r , int val) {
        Update(0,n-1,0,l,r,val);
    }
    int Query(int l , int r) {
        return Query(0,n-1,0,l,r).Val;
    }
};