#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
    string s, s1;
    while (cin >> s >> s1) {
        int n = s.size();
        int m = s1.size();
        vector<int> bigint1(n);
        vector<int> bigint2(m);
        for (int i = 0; i < n; i++) {
            bigint1[i] = s[n - 1 - i] - '0';
        }
        for (int i = 0; i < m; i++) {
            bigint2[i] = s1[m - 1 - i] - '0';
        }
        vector<int>ans(n + m + 10, 0);
        int t = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i + j] += (bigint1[i] * bigint2[j]);
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;

            }
        }
        while (ans.size() > 1 && !ans.back())ans.pop_back();
        reverse(ans.begin(), ans.end());
        for (auto i : ans)cout << i;
        cout << endl;
    }
}