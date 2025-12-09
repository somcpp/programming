#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node *links[26];
    bool flag;

    Node() {
        for(int i = 0; i < 26; i++) links[i] = NULL;
        flag = false;
    }

    bool containsKey(char ch) {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }

    Node* get(char ch) {
        return links[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    bool isEnd() {
        return flag;
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* node = root;
        for(int i = 0; i < word.length(); i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);   // FIXED
        }
        node->setEnd();
    }

    bool search(string word) {
        Node* node = root;
        for(int i = 0; i < word.length(); i++) {
            if(!node->containsKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix) {
        Node* node = root;
        for(int i = 0; i < prefix.length(); i++) {
            if(!node->containsKey(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

int main() {
    Trie t;
    t.insert("apple");
    t.insert("app");

    cout << t.search("apple") << "\n";   // 1
    cout << t.search("app") << "\n";     // 1
    cout << t.search("appl") << "\n";    // 0
    cout << t.startsWith("app") << "\n"; // 1

    return 0;
}
