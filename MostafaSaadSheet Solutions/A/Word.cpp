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
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] < 'a')cnt++;
        }
        if (cnt > s.size() - cnt) {
            for (int i = 0; i < s.size(); i++) {
                s[i] = toupper(s[i]);
            }
        }
        else {
            for (int i = 0; i < s.size(); i++) {
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
}