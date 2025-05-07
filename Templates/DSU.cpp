#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
const ll N = 1e6 + 10, mod = 1e9 + 7;
class DSU {
    private:
        vector<int> Parent;
        vector<int> GroupSize;
        int Componantes;
    public:
        DSU(int n) {
            Parent = vector<int>(n + 1);
            iota(Parent.begin(), Parent.end(), 0);
            GroupSize = vector<int>(n + 1, 1);
            Componantes = n;
        }
        int FindParent(int node) {
            if (Parent[node] == node) return node;
            return Parent[node] = FindParent(Parent[node]);
        }
        int GetGroupSize(int node) {
            return GroupSize[FindParent(node)];
        }
        void Merge(int u, int v) {
            u = FindParent(u);
            v = FindParent(v);
            if (u == v) return;
            if (GroupSize[u] < GroupSize[v]) swap(u, v);
            Parent[v] = u;
            GroupSize[u] += GroupSize[v];
            Componantes--;
        }
        bool Get() {
            return Componantes == 1;
        }
        bool IsSameGroup(int u, int v) {
            return FindParent(u) == FindParent(v);
        }
        
};
signed main()
{
    
}