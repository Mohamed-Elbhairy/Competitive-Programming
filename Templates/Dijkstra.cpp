vi Dijkstra(int source,vector<vpl>&adj) {
    int n  =adj.size();
    priority_queue< pl, vector< pl >, greater< pl > > pq;
    vi Dis(n+1,1e15);
    pq.push({0,source});
    Dis[source] = 0;
    while(!pq.empty()) {
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        if (Dis[node]!=cost)continue;
        for (auto &[node2,cost2]:adj[node]) {
            if (Dis[node]+cost2<Dis[node2]) {
                pq.push({cost2+Dis[node],node2});
                Dis[node2]=cost2+Dis[node];
            }
        }
    }

    return Dis;
}