#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
    cin >> tc;
    while (tc--) {  
        string s;
        cin >> s;
        if (s.size() <= 10)cout << s << endl;
        else {
            cout << s[0] << s.size() - 2 << s.back() << endl;
        }
    }
}