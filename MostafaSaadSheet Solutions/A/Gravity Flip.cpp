#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
   // cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)cout << arr[i] << " ";
        
    }
}