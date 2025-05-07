template < typename treeType = int , typename graphType =int >
class LCA {
public:
    LCA(
        int n = 0,
        const vector < vector < pair < int, graphType > > > &G = {},
        function < treeType(treeType, treeType) > op = [](treeType a, treeType b){ return a + b; },
        treeType _neutral = treeType(),
        int root = 1
    ) : N(n), LOG(0), ROOT(root), adj(G), operation(op), neutral(_neutral) {
        while((1 << LOG) <= N) LOG++;
        anc.assign(N + 5, vector < int > (LOG));
        cost.assign(N + 5, vector < treeType > (LOG, neutral));
        depth.assign(N + 5, 0);
        dfs(ROOT);
    }

    int kth_ancestor(int u, int k) const {
        if(depth[u] < k) return -1;
        for(int bit = 0; bit < LOG; bit++)
            if(k & (1 << bit))
                u = anc[u][bit];
        return u;
    }

    int get_lca(int u, int v) const {
        if(depth[u] < depth[v]) swap(u, v);

        u = kth_ancestor(u, depth[u] - depth[v]);
        if(u == v) return u;

        for(int bit = LOG - 1; bit >= 0; bit--)
            if(anc[u][bit] != anc[v][bit])
                u = anc[u][bit], v = anc[v][bit];

        return anc[u][0];
    }

    treeType query(int u, int v) const {
        int lca = get_lca(u, v);
        return operation(get_cost(u, depth[u] - depth[lca]), get_cost(v, depth[v] - depth[lca]));
    }

private:
    int N, LOG, ROOT;
    const vector < vector < pair < int, graphType > > > &adj;
    vector < vector < int > > anc;
    vector < vector < treeType > > cost;
    vector < int > depth;
    function < treeType(treeType, treeType) > operation;
    treeType neutral;

    void dfs(int u, int p = 0){
        for(auto& [v, w] : adj[u]){
            if(v == p) continue;
            depth[v] = depth[u] + 1;
            anc[v][0] = u, cost[v][0] = treeType(w);
            for(int bit = 1; bit < LOG; bit++){
                anc[v][bit] = anc[anc[v][bit - 1]][bit - 1];
                cost[v][bit] = operation(cost[v][bit - 1], cost[anc[v][bit - 1]][bit - 1]);
            }
            dfs(v, u);
        }
    }

    treeType get_cost(int u, int dist) const {
        if(depth[u] < dist) return neutral;
        treeType ret = neutral;
        for(int bit = 0; bit < LOG; bit++){
            if(dist & (1 << bit)){
                ret = operation(ret, cost[u][bit]);
                u = anc[u][bit];
            }
        }
        return ret;
    }
};
struct Edge {
    int mn , mx ;

    Edge (){
        mx = INT_MIN;
        mn = INT_MAX;
    }
    Edge (int X){
        mx = X;
        mn = X;
    }
    Edge(int u , int v) {
        mx = u ;
        mn = v;
    }
};
Edge Merge(const Edge&a , const Edge&b) {
    auto ret = a;
    ret.mn=min(a.mn,b.mn);
    ret.mx=max(a.mx,b.mx);
    return ret;
}
// LCA <Edge,int>lca(n+1,adj,[](const Edge&a,const Edge&b){return Merge(a,b);},Edge(INT_MIN,INT_MAX),Root);