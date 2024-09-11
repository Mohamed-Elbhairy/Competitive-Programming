#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int a, b; cin >> a >> b;
        a = max(a, b);
        b = 6 - a+1;
        double tempvalue = b / 6.0;
        for (double i = 0; i <= 6; i++) {
            for (double j = 1; j <= 6; j++) {
                if (i / j == tempvalue) {
                    cout << i << "/" << j << endl;
                    return 0;
                }
            }
        }
    }
}