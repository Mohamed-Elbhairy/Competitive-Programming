#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"

 int main() {
     IOFaster int tc = 1;
     int n; cin >> n;
     string s; cin >> s; 
     vector<int>L, R;
     int ans = INT_MAX;
     for (int i = 0; i < n;i++) {
         int x; cin >> x;
         /*if (s[i] == 'L')*/L.push_back(x);
         //else R.push_back(x);
     }
     for (int i = 1; i <n; i++) {
         if (s[i] == 'L' && s[i - 1] == 'R' && L[i] - L[i - 1] > 0)ans = min(ans, (L[i] - L[i - 1]) / 2);
     }
     if (ans == INT_MAX)cout << -1 << endl;
     else cout << ans << endl;
     

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