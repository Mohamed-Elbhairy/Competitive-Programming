#include<bits/stdc++.h>
#define ll long long
using namespace std ;
struct SparseTable {

    vector<vector<int>>dp;
    vector<int>MSB;
    int skip = INT_MAX;
    int Merge(int a , int b) {
        return min(a,b);
    }
    void Build(vector<int>&v) {
        int  n = v.size();

        for (int  i =2;i<=n;i++) {
            MSB[i]=MSB[(i>>1LL)]+1;
        }
        for (int i =0 ;i<n;i++) {
            dp[i][0]=v[i];
        }
        for (int pw = 1;(1LL<<pw)<=n;pw++) {
            for (int i =0;i +(1LL<<pw)<=n;i++) {
                int X = i + ((1LL<<(pw-1)));
                dp[i][pw]=Merge( dp[i][pw-1],dp[X][pw-1] );
            }
        }
    }
public:
    SparseTable(vector<ll>& v) {
        int n = v.size();
        dp = vector<vector<int>>(n+10,vector<int>(25));
        MSB = vector<int>(n+10);
        Build(v);
    }
    ll Query(int l, int r) {
        int len = r - l + 1;
        int ret = skip;
        for (int pw = 22-1;pw>=0;--pw) {
            if ((len&(1LL<<pw))) {
                ret=Merge(ret,dp[l][pw]);
                l+=(1LL<<pw);
            }
        }
        return ret;
    }

    ll Query1(int l ,int r) {
        int Len = r - l + 1;
        int ret = skip;
        ret=Merge(ret,dp[l][MSB[Len]]);
        ret=Merge(ret,dp[r-(1LL<<MSB[Len])+1][MSB[Len]]);
        return ret;

    }
};