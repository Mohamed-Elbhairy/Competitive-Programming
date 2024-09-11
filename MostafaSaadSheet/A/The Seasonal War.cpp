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
    if (i >= n || i < 0 || j >= n || j < 0 || vis[i][j] || arr[i][j] == '0')return;
    vis[i][j] = 1;
    for (int k = 0; k < 8; k++) {
        int n1 = i + dx[k];
        int n2 = j + dy[k];
        dfs(n1, n2);
    }
}
int main() {
    IOFaster int tc = 1;
    // cin >> tc;
    while (cin>>n&&n!=EOF) {
        arr.assign(n, vector<char>(n));
        vis.assign(n, vector<bool>(n,0));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && arr[i][j] == '1')cnt++, dfs(i, j);
            }
        }
        cout <<"Image number "<<tc++<<" "<<"contains "<< cnt << " war eagles." << endl;
    }
}