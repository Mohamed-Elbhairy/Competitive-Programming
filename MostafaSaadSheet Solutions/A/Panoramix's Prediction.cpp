#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
 ll sumeven( ll n) {
    if (n % 2 != 0) n--;
    ll sum = n / 2 * (n / 2 + 1);
    return sum;
}
int main() {
    IOFaster int tc = 1;
    int n, m; cin >>n>> m;
    vector<int>pr;
    for (int i = 1; i <= 100; i++) {
        bool x = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0)x = 0;
        }
        if (x)pr.push_back(i);
    }
    auto it = *upper_bound(pr.begin(), pr.end(),n);
    it == m ? cout << "YES" : cout << "NO";
}
/*  Think More => Code Faster
        Don't Code a not Easy Problem Before The Get Solution
        Remmember =>  WR ? relax and take it easy Try debug 10 min still wrong => Think New approch
    */
    /*
    record =>
                Start Reading =>
                Start Thinking =>
                Start Codeing =>
                Start Debuging =>
                BUT Their are prograss

    */