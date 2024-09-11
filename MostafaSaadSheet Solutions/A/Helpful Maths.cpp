#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
int main() {
    IOFaster int tc = 1;
  //  cin >> tc;
    while (tc--) {  
        string s; cin >> s;
        int arr[101];
        int ptr = 0;
        for (auto i : s) {
            if (isdigit(i))arr[ptr++] = i - '0';
        }
        sort(arr, arr + ptr);
        for (int i = 0; i < ptr; i++) {
            cout << arr[i];
            if (i != ptr - 1)cout << '+';
        }
    }
}