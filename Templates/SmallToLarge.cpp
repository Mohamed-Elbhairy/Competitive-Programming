vector<int>adj[N];
multiset<int>s[N];
int ans[N];
int v[N];
const int OO = 1e14;
int add(int node, int val) {
    int Ans = OO;
    auto it1 = s[node].lower_bound(val);
    if ( it1 != s[node].end() ) {
        Ans = min(Ans, abs(val - *it1));
    }
    if ( it1 != s[node].begin() ) {
        --it1;
        Ans = min(Ans, abs(val - *it1));
    }
    s[node].insert(val);
    return Ans;
}
int operation(int a , int b) {
    return min(a,b);
}
void dfs(int node, int parent) {
    add(node, v[node]);
    int Ans = OO; // skip val
    for ( auto &child : adj[node] ) {
        if ( child == parent )
            continue;
        dfs(child, node);

        Ans = operation(Ans, ans[child]); // operation

        if ( s[child].size() > s[node].size() ) { // small in large
            s[child].swap(s[node]);
        }

        for ( auto &it : s[child] ) {
            Ans = operation(Ans, add(node, it)); // operation
        }
    }
    ans[node] = Ans; // ans Queries Here
}