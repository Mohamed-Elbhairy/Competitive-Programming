#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
vector<vector<char>>arr;
vector<vector<bool>>vis;
int n;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
void dfs(int i, int j) {

    if (i >= n || i < 0 || j >= n || j < 0 || vis[i][j] || arr[i][j] == '.')return;

    vis[i][j] = 1;

    for (int k = 0; k < 4; k++) {
        int n1 = i + dx[k];
        int n2 = j + dy[k];
        dfs(n1, n2);
    }
}
int main() {
    IOFaster int tc = 1;
     cin >> tc;
    for(int z=1;z<=tc;z++){
        cin >> n;
        arr.assign(n, vector<char>(n));
        vis.assign(n, vector<bool>(n, 0));

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && arr[i][j] == 'x')cnt++, dfs(i, j);
            }
        }

      cout<<"Case "<< z<<": " << cnt << endl;
    }
}