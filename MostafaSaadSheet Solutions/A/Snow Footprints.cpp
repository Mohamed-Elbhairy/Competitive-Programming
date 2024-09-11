#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int n; cin >> n;
        string s; cin >> s;
        int L = s.find('L');

        int R = s.find('R');

        if (~L && ~R)cout << R + 1 << " " << L << endl;

        else if (~L) {
            reverse(s.begin(), s.end());
            cout <<  n - s.find('L')  <<" "<< L << endl;
        }
        else {
            reverse(s.begin(), s.end());
            cout << R + 1 << " " <<n- s.find('R') + 1 << endl;
        }

    }
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