#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define int ll 
#define endl "\n"
signed main() {
    IOFaster int tc = 1;
    // cin >> tc;
    int arr[100010] = {};
    while (tc--) {
        string arr[3];
        arr[0] = "qwertyuiop";
        arr[1] = "asdfghjkl;";
        arr[2] = "zxcvbnm,./";
        char c; 
        cin >> c;
        string s; cin >> s;
        for (auto i : s) {
            if (c == 'R') {
                for (int r = 0; r < 3; r++) {
                    for (int j = 0; j < arr[r].size(); j++) {
                        if (arr[r][j] == i) {
                            cout << arr[r][j - 1];
                          //  break; 
                        }
                    }
                }
            }
            else {
                for (int r = 0; r < 3; r++) {
                    for (int j = 0; j < arr[r].size(); j++) {
                        if (arr[r][j] == i) {
                            cout << arr[r][j+1];
                           // break;
                        }
                    }
                }
            }
        }
      
    }
}