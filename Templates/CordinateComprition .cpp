struct coordinateCompression {
private:
    vector<ll> init;
    void compress(vector<ll>& v) {
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
    }
public:
    coordinateCompression(vector<ll>& v) {
        init = v;
        compress(init);
    }
    int index(ll val) {
        return lower_bound(init.begin(), init.end(), val) - init.begin();
    }
    ll initVal(int idx) {
        return init[idx];
    }
    int size() {
        return init.size();
    }
};