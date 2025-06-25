class Trie{
private:
    struct Node {
        Node* child[26]{} ;
        int prefix ;
        int End ;
        Node() {
            End = 0;
            prefix = 0;
            for (auto & i : child) {
                i = nullptr;
            }
        }
    };
    Node* root;
    void remove(Node* cur, const string& word, int idx) {
        if (!cur) return;

        if (idx == word.size()) {
            cur->End--;
            cur->prefix--;
            return;
        }

        int c = word[idx] - 'a';
        Node* child = cur->child[c];
        if (!child) return;

        remove(child, word, idx + 1);

        if (child->prefix == 0 && child->End == 0 && isLeaf(child)) {
            delete child;
            cur->child[c] = nullptr;
        }

        cur->prefix--;
    }

    bool isLeaf(Node* node) {
        for (int i = 0; i < 26; ++i)
            if (node->child[i]) return false;
        return true;
    }
    public:
    Trie() {
        root = new Node();
    }
    void insert(const string & word)  {
        Node* cur = root;
        for (int i = 0; i < word.size(); i++) {
            if (cur->child[word[i] - 'a'] == nullptr) {
                cur->child[word[i] - 'a'] = new Node();
            }
            cur = cur->child[word[i] - 'a'];
            cur->prefix++;

        }
        cur->End++;
    }
    int Count(const string & word)  {
        const Node * cur = root;
        for (char i : word) {
            if (cur->child[i - 'a'] == nullptr) {
                return 0;
            }
            cur = cur->child[i - 'a'];
        }
        return cur->End;
    }
    int CountPrefix(const string & word) {
        const Node * cur = root;
        for (char i : word) {
            if (cur->child[i - 'a'] == nullptr) {
                return 0;
            }
            cur = cur->child[i - 'a'];
        }
        return cur->prefix;
    }
    void remove(const string& word) {
        remove(root, word, 0);
    }
    ~Trie() {
        clear(root);
    }
    void clear(Node* node) {
        if (!node) return;
        for (Node* child : node->child) {
            clear(child);
        }
        delete node;
    }

};