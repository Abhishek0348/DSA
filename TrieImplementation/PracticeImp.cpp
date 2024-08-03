#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node {
    Node* links[26];
    bool flag = false;

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
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

    bool search(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containsKey(word[i])) {
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }

    bool startsWith(string prefix) {
        Node* node = root;
        for (int i = 0; i < prefix.length(); i++) {
            if (!node->containsKey(prefix[i])) {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }

    string longestCommonPrefix() {
        string prefix = "";
        Node* node = root;
        while (true) {
            int count = 0;
            char nextChar;
            for (int i = 0; i < 26; i++) {
                if (node->links[i] != NULL) {
                    count++;
                    nextChar = 'a' + i;
                }
            }
            if (count == 1 && !node->isEnd()) {
                prefix += nextChar;
                node = node->get(nextChar);
            } else {
                break;
            }
        }
        return prefix;
    }
};

int main() {
    Trie trie;
    vector<string> strs = {"flower", "flow", "flight"};
    for (const auto& str : strs) {
        trie.insert(str);
    }
    string commonPrefix = trie.longestCommonPrefix();
    cout << "Longest Common Prefix: " << commonPrefix << endl;
    return 0;
}
