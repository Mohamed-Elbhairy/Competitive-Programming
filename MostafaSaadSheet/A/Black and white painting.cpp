#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
        ll n, m, c;
    while (1) {
          cin >> n >> m >> c;
          if (!n && !m && !c)break;
          cout <<( ((n - 7) * (m - 7))+ (c == 1)) /2<< endl;
    }
}