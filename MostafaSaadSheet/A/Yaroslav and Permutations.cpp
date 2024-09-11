#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"
const int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, 1, -1, -1 };
 int main() {
     IOFaster int tc = 1;
     int n; cin >> n; 
     map<int, int>mp;
     int m = n;
     while (m--) {
         int x; cin >> x;
         mp[x]++;
     }
     vector<pair<int, int>>arr;
     for (auto i : mp)arr.push_back({ i.second,i.first });
     int prev = 0; 
     while(n--){
         sort(arr.rbegin(),arr.rend());
         for (int i = 0; i < arr.size(); i++) {
             if (arr[i].second != prev && arr[i].first > 0) {
                 prev = arr[i].second;
                 arr[i].first--;
                 break;
             }
         }
     }
     for (auto i : arr) {
         if (i.first > 0) {
             cout << "NO\n"; return 0;
         }
     }
     cout << "YES\n";
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