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
        int freq[101] = {};
        int m; cin >> m;
        while (m--) { int x; cin >> x; freq[x] = 1; }
        cin >> m;
        while (m--) { int x; cin >> x; freq[x] = 1; }
        for (int i = 1; i <= n; i++) {
            if (!freq[i]) {
                cout << "Oh, my keyboard!\n"; return 0;
            }
        }
        cout << "I become the guy.\n";
    }
}