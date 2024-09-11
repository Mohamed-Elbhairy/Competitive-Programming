#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
vector<vector<char>>arr;
int n,m;
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
string s = "IEHOVA";
void dfs(int i, int j,int ptr) {
   // cout << s[ptr] << endl;
    //if (arr[i][j]=='#')return;
    if (i - 1 >= 0) {
        if (arr[i - 1][j] == s[ptr]||arr[i-1][j]=='#') {
            cout << "forth";
            if (arr[i - 1][j] == '#')cout << "\n";
            else cout << " ";
            if (ptr < 6)dfs(i - 1, j, ptr + 1);
            return;
        }
    }
    if (j + 1 < m) {
        if (arr[i][j+1] == s[ptr]|| arr[i][j+1] == '#') {
            cout << "right";
            if (arr[i][j+1] == '#')cout << "\n";
            else cout << " ";
            if (ptr < 6)dfs(i, j+1, ptr + 1);
            return;
        }
    }
    if (j - 1 >= 0) {
        if (arr[i][j-1] == s[ptr]|| arr[i][j-1] == '#') {
            cout << "left";
            if (arr[i][j-1] == '#')cout << "\n";
            else cout << " ";
            if(ptr<6)dfs(i, j-1, ptr + 1);
            return;
        }
    }
}
int main() {
    IOFaster int tc = 1;
     cin >> tc;
    while (tc--) {
        cin >> n >> m;
        arr.assign(n, vector<char>(m));/*
        vis.assign(n, vector<bool>(m,0));*/
        int cnt = 0;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '@')x = i, y = j;
            }
        }
        dfs(x, y,0);
       /* cout << endl;*/
    }
}