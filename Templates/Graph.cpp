class Graph {
public :
   int n ;
    int Log =30 ;
    vector<bool>vis;
    vector<vector<int>>adj,Anc;
    vi Depth ;
    Graph(int _n){
        vis=vector<bool>(_n+1);
        adj=vector<vector<int>>(_n+1);
        Depth=vi(_n+1);
        Anc=vector<vector<int>>(_n+1,vector<int>(Log));
        this->n = _n ;
 
    }
    Graph(){}
    void AddEdge(int u,int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void dfs(int node){
        vis[node]=1;
        for(auto &child:adj[node]){
            if(!vis[child])dfs(child);
        }
    }
 
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
    int KthAncestor(int node ,int k) {
        for (int i =Log-1;i>=0;i--) {
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
    int GetDis(int u, int v) {
        int lca = LCA(u, v);
        return Depth[u] + Depth[v] - 2 * Depth[lca];
    }
    void clear(){
        for(int i=0;i<=n;i++)vis[i]=0,adj[i].clear();
    }

};