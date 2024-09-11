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
        if (n == 0)cout << 1 << endl;
        else if (n == 1)cout << 8 << endl;
        else if (n % 4 == 0)cout << 6 << endl;
        else if (n % 4 == 2)cout << 4 << endl;
        else if (n % 4 == 3)cout << 2 << endl;
        else cout << 8 << endl;
     }
}