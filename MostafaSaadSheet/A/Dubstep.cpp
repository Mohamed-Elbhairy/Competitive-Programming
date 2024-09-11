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
        string s; cin >> s;
        vector<string>ans;
        int n = s.size();
        s += 'W';
        s += 'U';
        s += 'B';
        string t = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') { ;
                s[i] = '4';
                s[i+1] = '4';
                s[i+2] = '4';
               if(t.size()) ans.push_back(t); 
                 t = "";
             //    continue;
            }
           if(isalpha(s[i])) t += s[i];
           //cout << t << endl;
        }
               if(t.size()) ans.push_back(t); 
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i == ans.size() - 1)cout << "\n";
            else cout << " ";
        }
    }
}