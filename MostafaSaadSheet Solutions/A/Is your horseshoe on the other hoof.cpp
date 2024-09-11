#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        int arr[5];
        for (int i = 0; i < 4; i++)cin >> arr[i];
        sort(arr, arr + 4);
        int ans = 0; 
        for (int i = 0; i < 4; i++)if (arr[i] == arr[i + 1])ans++;
        cout << ans << endl;
    }
}