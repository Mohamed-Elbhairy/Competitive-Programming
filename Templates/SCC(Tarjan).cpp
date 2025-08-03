struct Tarjan {
public:
    vector< vi > adj, Comps;
    vi dfn, InStack, comp, LowerLink;
    stack< int > stk;
    int timer;
    void addEdge(int u, int v) { adj[u].push_back(v); }
    Tarjan(int n) {
        dfn = InStack = comp = LowerLink = vector< int >(n + 1);
        adj = vector< vi >(n + 1);
        stk = stack< int >();
        timer = 1;
    }
    void dfs(int node) {
        dfn[node] = LowerLink[node] = timer++;
        InStack[node] = 1;
        stk.push(node);
        for ( auto &child : adj[node] ) {
            if ( dfn[child] == 0 ) {
                dfs(child);
                LowerLink[node] = min(LowerLink[node], LowerLink[child]);
            }
            else if ( InStack[child] == 1 ) {
                LowerLink[node] = min(LowerLink[node], dfn[child]);
            }
        }
        if ( LowerLink[node] == dfn[node] ) {
            int X = -1;
            Comps.push_back(vi());
            while ( X != node ) {
                X = stk.top();
                stk.pop();
                InStack[X] = 0;
                Comps.back().push_back(X);
                comp[X] = Comps.back().size() - 1;
            }
        }
    }
    void run(int n) {
        for ( int i = 1; i <= n; i++ ) {
            if (dfn[i] == 0 ) {
                dfs(i);
            }
        }
    }
};