#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
vector<int>adj[102];
bool vis[102];
int n;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int toremove = 0;
int cnt = 0; 
bool NeedToRemove = 0;
void dfs(int i, int j) {

    if (vis[i]) {
        if (cnt & 1)NeedToRemove = 1;
        return;
    }
    cnt++;
    vis[i] = 1;
    for (auto it : adj[i]) {
        if (it != j) {
            dfs(it, i);
        }
    }
}
int main() {
    IOFaster int tc = 1;
     //cin >> tc;
        int m;
        cin >> n>>m;
        while (m--) {
            int u, v;
            cin >> u>> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i])dfs(i,-1);
            if (NeedToRemove)toremove++;
            cnt = 0;
            NeedToRemove = 0;
        }
        if ((n - toremove) & 1)toremove++;
        cout << toremove << endl;
}