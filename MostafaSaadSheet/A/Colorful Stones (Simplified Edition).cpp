#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        string s, s1; cin >> s >> s1;
        int j = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s[j])j++;
        }
        cout << j + 1 << endl;
    }
}