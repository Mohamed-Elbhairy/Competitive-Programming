    class BinaryTrie {
private:
    int sz;
    struct Node {
        Node *child[2];
        int freq[2];
        int cnt = 0;
        Node() {
            child[0] = child[1] = nullptr;
            freq[0] = freq[1] = cnt = 0;
        }
    };
    void remove(int X, int bit, Node *cur) {
        if ( bit == -1 )
            return;
        bool idx = X & (1 << bit);
        remove(X, bit - 1, cur->child[idx]);
        cur->freq[idx]--;
        cur->cnt--;
        if ( cur->freq[idx] == 0 ) {
            delete cur->child[idx];
            cur->child[idx] = nullptr;
        }
    }
    Node *root;

public:
    void remove(int X) { remove(X, sz - 1, root); }
    BinaryTrie(int _sz = 31) {
        sz = _sz;
        root = new Node();
    }
    void insert(int X) {
        auto cur = root;
        for ( int bit = sz - 1; bit >= 0; bit-- ) {
            bool Xbit = X & (1LL << bit);
            if ( cur->child[Xbit] == nullptr ) {
                cur->child[Xbit] = new Node();
            }
            cur->freq[Xbit]++;
            cur = cur->child[Xbit];
            cur->cnt++;
        }
    }

    int MaxXor(int k) {
        int ret = 0;
        auto cur = root;
        for ( int bit = sz - 1; bit >= 0; bit-- ) {
            bool Kbit = k & (1LL << bit);
            if ( cur->child[Kbit ^ 1] != nullptr ) {
                cur = cur->child[Kbit ^ 1];
                ret |= (1LL << bit);
            }
            else
                cur = cur->child[Kbit];
        }
        return ret;
    }
    int MinXor(int k) {
        int ret = 0;
        auto cur = root;
        for ( int bit = sz - 1; bit >= 0; bit-- ) {
            bool Kbit = k & (1LL << bit);
            if ( cur->child[Kbit] != nullptr ) {
                cur = cur->child[Kbit];
            }
            else if ( cur->child[Kbit ^ 1] != nullptr ) {
                ret |= (1LL << bit);
                cur = cur->child[Kbit ^ 1];
            }
            else
                break;
        }
        return ret;
    }
    int CountXorAtLeastK(int X, int K) {
        int ret = 0;
        bool Ok = 0 ;
        auto cur = root;
        for ( int bit = sz - 1; bit >= 0 and cur!=nullptr; bit-- ) {
            bool Kbit = K & (1LL << bit);
            bool Xbit = X & (1LL << bit);
            if (Kbit) {
               cur = cur->child[Xbit^1];
                K-=(1LL << bit);
            }
            else {
                if (cur->child[Xbit^1])ret+=cur->child[Xbit^1]->cnt;
                cur = cur->child[Xbit];
            }

        }
        if (K<=0 and cur)ret+=cur->cnt;
        return  ret;
    }
};