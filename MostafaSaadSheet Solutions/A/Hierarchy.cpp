#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
vector<int>tep;
vector<int>adj[100001];
bool vis[100001];
map<int, int>ans;
void dfs(int node) {
   // if (vis[node])return;
    vis[node] = 1;
    for (auto it : adj[node]) {
    if(!vis[it])dfs(it);
    }
    tep.push_back(node);
    //,ans[node]);
}

int main() {
    /*  Think More => Code Faster
        Don't Code a not Easy Problem Before The Get Solution
        Remmember =>  WR ? relax and take it easy Try debug 10 min still wrong => Think New approch
    */
    /*
    record =>
                Start Reading =>3:06
                Start Thinking =>3:11
                Start Codeing => 3:24
                Start Debuging =>   WR
                BUT Their are prograss

    */
    IOFaster int tc = 1;
     //cin >> tc;
    while (tc--) {
        map<int, int>B;
       int n, k; cin >> n >> k;
       for(int i=1;i<=k;i++) {
            int s; cin >> s;
            while (s--) {
                int x; cin >> x;
                adj[i].push_back(x);
             //   adj[x].push_back(i);
           //     B[x] = 1;
            }
        }
       tep.push_back(-1);
       for (int i = 1; i <= n; i++) {
           if (!vis[i])dfs(i);
       }
       int B1 = 0;
       for (int i = n; i >=0; --i) {
           if (tep[i] == -1)continue;
           ans[tep[i]] = B1;
           B1 = tep[i];
       }
       for (int i = 1; i <= n; i++) {
           cout << ans[i] << endl;
       }
    }
}