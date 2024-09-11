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
        int n, t=0; cin >> n;
        int freq[26] = { 0 };
        map<string, int>mp;
        while (n--) {

            string s; cin >> s;
            mp[s]++;
        }
        t = 0;
        for (auto i : mp) {
            t = max(t, i.second);
        }
        for (auto i : mp) {

            if (i.second == t)cout << i.first;
        }
    }
}