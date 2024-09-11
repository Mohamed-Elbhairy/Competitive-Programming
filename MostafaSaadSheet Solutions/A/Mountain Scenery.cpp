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
     int n, k; cin >> n >> k;
     vector<int>arr(2*n+1);
     for (auto& i : arr)cin >> i;
     vector<int>t;
     for (int i = 0; i < 2 * n + 1; i++) {
         if ((i == 0 || arr[i - 1] < arr[i] - 1) && (i == 2 * n || arr[i + 1] < arr[i] - 1)) {
             t.push_back(arr[i]);
         }
     }
     sort(t.rbegin(), t.rend());
     map<int, int>mp;
     for (int i = 0; i < k; i++)mp[t[i]]++;
     for (int i = 0; i < (2*n)+1; i++) {
         if ((i==0||arr[i-1]<arr[i]-1)&&(i==2*n||arr[i+1]<arr[i]-1) && mp[arr[i]] > 0) {
             mp[arr[i]]--; 
             arr[i]--;
         }
      //   cout << arr[i] << " " << mp[arr[i]] << endl;
     }
     for (auto i : arr)cout << i << " ";
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