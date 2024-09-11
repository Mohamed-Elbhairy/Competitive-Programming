#include <bits/stdc++.h>
using namespace std;
#define IOFaster ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define endl "\n"

 int main() {
     IOFaster int tc = 1;
     string s; cin >> s; 
     string s1; cin >> s1;
     deque<char>arr;
     for (int i = 0; i < s.size(); i++)arr.push_back(s[i]);
     int l = s.find('|') + 1, r = s.size() - s.find('|');
     while (!s1.empty()) {


         if (l < r)l++, arr.push_front(s1.back()), s1.pop_back();
         else if (l > r)r++, arr.push_back(s1.back()), s1.pop_back();
         else if (l == r && s1.size() & 1) {
             cout << "Impossible"; return 0;
         }
         else r++, arr.push_back(s1.back()), s1.pop_back();
     }
     if (l != r)cout << "Impossible\n";
     else {
         for (auto i : arr)cout << i;
     }
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