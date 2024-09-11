#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int x; cin >> x;
                if (x == 1) {
                    cout << abs(2 - i) + abs(2 - j) << endl;
                    return 0; 
                }
            }
        }
        
    }
}