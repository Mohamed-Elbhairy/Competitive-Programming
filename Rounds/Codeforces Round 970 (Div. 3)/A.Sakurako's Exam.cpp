#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int n, arr[23];
int x;
bool rec(int i, ll sum) {
	if (i == n) {
		if (sum == x)return 1;
		else return 0;
	}
	ll ch1 = rec(i + 1, sum + arr[i]);
	ll ch2 = rec(i + 1, sum - arr[i]);
	return ch1 || ch2;
}
int main() {
	int t; cin >> t;
	while(t--){
		x = 0; int a, b; 
	int i = 0;
	cin >> a >> b;
	while (a--)arr[i++] = 1;
	while (b--)arr[i++] = 2;
	n = i+1;
	if (rec(1, arr[0]) != 0)cout << "YES\n";
	else cout << "NO\n";
	
	}
}