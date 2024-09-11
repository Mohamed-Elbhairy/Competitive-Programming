#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"

 int main() {
     IOFaster int tc = 1;
     string s; cin >> s; 
     for (auto j = 0; j < s.size(); j++) {
         char& i = s[j];
         if (i == '9' && !j)continue;
         i = min(i - '0', 9 - (i - '0')) + '0';
     }
     cout << s << endl;
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