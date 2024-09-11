#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   ll n=1; 
    while (1) {  
        cin >> n;
        if (n == 0)break;
        ll sq = sqrt(n);
        if (sq*sq==n)cout << "yes\n";
        else cout << "no\n";
    }
}