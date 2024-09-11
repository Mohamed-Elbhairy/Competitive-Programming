#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
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
    IOFaster int tc = 1;
    //cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<string>arr(n);
        for (int i = 0; i < n; i++)cin >> arr[i];
        char r = arr[0][0];
        char r1 = arr[1][0];
        if (r == r1) {
            cout << "NO"; return 0;
        }
        for (int i = 0; i < n; i++) {
                if (arr[i][i] !=r||r!= arr[i][n-i-1]) {
                    cout << "NO"; return 0;
                }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j!=i&&j!=n-i-1&&arr[i][j] != r1) {
                    cout << "NO"; return 0;
                }
            }
        }
         cout << "YES\n";
     }
}