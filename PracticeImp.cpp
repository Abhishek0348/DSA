#include <iostream>

using namespace std;

struct Node
{
    Node* links[26];
    bool flag = false;

    bool containskey(char ch) {
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

class trei
{
private:
    Node* root;
public:
    trei(){
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containskey(word[i])) {

                node->put(word[i], new Node());
            }

            node = node->get(word[i]);
        }

        node->setEnd();
    }


    bool search(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containskey(word[i])) {

                return false;
            }

            node = node->get(word[i]);
        }

        return node->isEnd();
    }

     bool startswith(string word) {
        Node* node = root;
        for (int i = 0; i < word.length(); i++) {
            if (!node->containskey(word[i])) {

                return false;
            }

            node = node->get(word[i]);
        }
        return true;
     }

};




int main()
{
  trei trei;
  cout<<"Inserting : [flower, flow, flue]"<<endl;
  trei.insert("flower");
  trei.insert("flow");
  trei.insert("flue");

  cout << "Search if flower exists in trie: " <<
    (trei.search("flower") ? "True" : "False")<< endl;

  cout << "If words is Trie start with flo: " <<
    (trei.startswith("flo") ? "True" : "False" )<< endl;
}