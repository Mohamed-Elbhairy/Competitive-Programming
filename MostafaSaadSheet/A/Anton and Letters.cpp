#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        string s;
        getline(cin, s);
        set<char>st;
        for (auto& i : s)st.emplace(i);
        st.erase('{');
        st.erase('}');
        st.erase(' ');
        st.erase(',');
        cout << st.size() << endl;
    }
}