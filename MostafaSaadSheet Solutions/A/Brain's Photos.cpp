#include<bits/stdc++.h>
using namespace std;
//==============================================shortcuts================================================================//
#define ll long long 
#define ld long double
#define str string 
#define endl "\n"
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fix(n) fixed << setprecision(n)
#define PI acos(-1) 
#define vin(start,end_,name) for (int i = start; i < end_; i++)cin >> name[i];
#define test  int t ; cin>>t ; while (t --) 
#define v(t,name,size) vector<t>name(size);
#define all(name) name.begin(),name.end()
#define p(t1,t2) pair<t1,t2>
//============================================functions================================================================//

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
bool isPrime(ll n) {
    if (n % 2 == 0 && n > 2) return false;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}
str ToBinary_8(ll n) {
    string s = bitset<32>(n).to_string();
    return s;
}
bool ispalindrom(string s) {
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
        if (s[i] != s[j])
            return false;
    return true;
}
//==========================================================code==================================================//
void solution() {
    int n, m;
    cin >> n >> m; char c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;      
            if (c == 'Y' || c == 'M' || c == 'C') {
                cout << "#Color" << endl; return;
            }

        }
    }
    cout << "#Black&White" << endl;
}
int main(){
    SPEED
        //test
        solution();
}
