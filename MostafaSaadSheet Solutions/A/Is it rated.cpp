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
        vector<pair<int, int>>arr(n);
        int t = 0;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            if (a != b) {
                cout << "rated";
                return 0;
            }
            arr[i].first = a;
            arr[i].second = b;
        }
        for (int i = 1; i < n; i++) {
            if (arr[i].first > arr[i - 1].first) {
                cout << "unrated"; return 0;
            }
        }
        cout << "maybe";

        
    }
}