#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
 int main() {
     IOFaster int tc = 1;
     char arr[10][10];
     for (int i = 0; i < 4; i++)for (int j = 0; j < 4; j++) cin >> arr[i][j];
     for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 4; j++) {
             int cnt = 0, cnt1 = 0;
             cnt += arr[i][j] == '#';
             cnt += arr[i][j + 1] == '#';
             cnt += arr[i + 1][j] == '#';
             cnt += arr[i + 1][j + 1] == '#';
             cnt1 += arr[i][j] == '.';
             cnt1 += arr[i][j + 1] == '.';
             cnt1 += arr[i + 1][j] == '.';
             cnt1 += arr[i + 1][j + 1] == '.';
             if (cnt >= 3 || cnt1 >= 3) {
                 cout << "YES"; return 0;
             }
         }
     }
     cout << "NO\n";
}

/*  Think More => Code Faster
        Don't Code a not Easy Problem Before The Get Solution
        Remmember =>  WR ? relax and take it easy Try debug 10 min still wrong => Think New approch
*/
    /*
    record =>
                Start Reading =>
                Start Thinking =>
                Start Codeing =>
                Start Debuging =>
                BUT Their are prograss

    */