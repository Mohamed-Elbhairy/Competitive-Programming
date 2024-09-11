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
        int n, t; cin >> n >> t;
        if (t!=10) {
            for (int i = 0; i < n; i++)cout << t;
        }   
        else {
            if (n == 1)cout << -1 << endl;
            else {
                cout << 1;
                for (int i = 0; i < n - 1; i++)cout << '0';
            }
        }

    }
}