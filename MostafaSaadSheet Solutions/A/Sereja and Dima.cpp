#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int n; cin >> n;
        deque<int>arr(n);
        for (auto& i : arr)cin >> i;
        ll sum1 = 0, sum2 = 0;
        while (!arr.empty()) {
            if (arr.front() > arr.back())sum1 += arr.front(), arr.pop_front();
            else sum1 += arr.back(), arr.pop_back();
            if (arr.empty())break;
            if (arr.front() > arr.back())sum2 += arr.front(), arr.pop_front();
            else sum2 += arr.back(), arr.pop_back();
        }
        cout << sum1 << " " << sum2 << endl;
    }
}