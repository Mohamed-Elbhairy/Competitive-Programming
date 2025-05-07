const ll N = 1e6 + 5, mod = 1e9 + 7,Log = 23 ;
vector<int>adj[N];
int Anc[N][Log],Depth[N];
void BuildAncestors(int node ,int Parent) {
    // Culc Depth
    Depth[node]=Depth[Parent]+1;
    // Base Case
    Anc[node][0] = Parent;
    //
    for (int i =1 ;i<Log;i++) {
        int P =Anc[node][i-1]; // the Prev anc
        Anc[node][i] = Anc[P][i-1]; // Anc[node][0] = p , Anc[node][1]= Anc[P][0]
    }
    for (auto&child:adj[node]) {
        if (child!=Parent)
            BuildAncestors(child,node);
    }
}
map<int,int> get_cost(int u, int dist) const {
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

int KthAncestor(int node ,int k) {
    for (int i =Log;i>=0;i--) {
        if (k&(1<<i)) { // if BIT jump to BIT
            node=Anc[node][i];
        }
    }
    return node;
}
int LCA(int u , int v) {
    if (Depth[u]<Depth[v])
        swap(u,v);
    u = KthAncestor(u,Depth[u]-Depth[v]); // make them on the same Level
    if (u==v)return u;
    for (int i =Log-1;i>=0;i--) {
        if (Anc[u][i]!=Anc[v][i]) { // the Last ancestor not common
            u = Anc[u][i];
            v = Anc[v][i];
        }
    }
    return Anc[u][0]; // dis->1 from the LCA ->return Parent = LCA

}
int Mx(int node , int k) {
    int ret=0;
    for (int i =Log-1;i>=0;i--) {
        if (k&(1<<i)) {
            ret=max(ret,dis[node][i]);

            node=Anc[node][i];
        }
    }
    return ret;
}
int Query(int u , int v) {
    int Lca = LCA(u,v);
    return max(Mx(u,Depth[u]-Depth[Lca]),Mx(v,Depth[v]-Depth[Lca]));
}