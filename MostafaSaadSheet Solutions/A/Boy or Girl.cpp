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
        int freq[26] = {};
        for (auto i : s)freq[i - 'a']++;
        int cnt = 0; 
        for (int i = 0; i < 26; i++) {
            cnt += !!freq[i];
        }
        cout << ((cnt & 1) ? "IGNORE HIM!" : "CHAT WITH HER!");
    }
}