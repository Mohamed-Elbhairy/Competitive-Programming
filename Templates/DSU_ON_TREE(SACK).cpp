vector< int > adj[N];
int v[N];
int ans[N];
multiset< int > mst;
int Size[N];
int Heavy[N];
int Ans = OO;
void pre(int node, int parent) {
    Size[node] = 1;

    for ( auto &child : adj[node] ) {
        if ( child == parent )
            continue;

        pre(child, node);

        Size[node] += Size[child];

        if ( Size[Heavy[node]] < Size[child] ) {
            Heavy[node] = child;
        }
    }
}
void add(int node) {
    auto it = mst.lower_bound(v[node]);
    if ( it != mst.end() )
        Ans = min(Ans, abs(*it - v[node]));
    if ( it != mst.begin() ) {
        --it;
        Ans = min(Ans, abs(*it - v[node]));
    }
    mst.insert(v[node]);
}
void remove(int node) {
    auto it = mst.find(v[node]);
    if ( it != mst.end() )
        mst.erase(it);
}
int operation(int a, int b) { return 0; }
void collect(int node, int parent, bool add_flag) {
    if ( add_flag ) {
        add(node);
    }
    else {
        remove(node);
    }
    for ( auto &child : adj[node] ) {
        if ( child == parent )
            continue;
        collect(child, node, add_flag);
    }
}
void calculate(int node) { ans[node] = Ans; }
void dfs(int node, int parent, bool keep) {
    // add all except heavy
    for ( auto &child : adj[node] ) {
        if ( child == parent || child == Heavy[node] )
            continue;
        dfs(child, node, 0); // dfs light
    }


    if ( Heavy[node] ) // goto heavy and keep it
        dfs(Heavy[node], node, 1);

    add(node); // add curnode

    for ( auto &child : adj[node] ) { // add light
        if ( child == parent || child == Heavy[node] )
            continue;
        collect(child, node, 1); // add light
    }

    // answer Queries
    calculate(node);

    // erase
    if ( !keep )
        collect(node, parent, 0), Ans = OO;
}
