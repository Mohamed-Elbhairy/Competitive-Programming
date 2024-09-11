#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        string s; cin >> s; 
        string s1; cin >> s1; 
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            s1[i] = tolower(s1[i]);
        }
        if (s < s1)cout << -1 << endl;
        else if (s > s1)cout << 1 << endl;
        else cout << 0 << endl;
    }
}