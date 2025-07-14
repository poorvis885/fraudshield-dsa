#include "trie.h"
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

struct TrieNode {
    TrieNode* children[26] = {nullptr};
    bool isEnd = false;
};

class Trie {
public:
    TrieNode* root = new TrieNode();

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!isalpha(ch)) continue;
            ch = tolower(ch);
            if (!node->children[ch - 'a']) {
                node->children[ch - 'a'] = new TrieNode();
            }
            node = node->children[ch - 'a'];
        }
        node->isEnd = true;
    }

    bool searchPrefix(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!isalpha(ch)) continue;
            ch = tolower(ch);
            if (!node->children[ch - 'a']) return false;
            node = node->children[ch - 'a'];
        }
        return true;
    }
};

void runTrieModule() {
    cout << "\n[Trie Module] Checking for Suspicious Product Titles...\n";
    Trie trie;
    trie.insert("iphone");
    trie.insert("oneplus");
    trie.insert("samsung");

    vector<string> reviews = {"iPhone 14", "Oppo Reno", "OnePlus Ace"};
    for (string review : reviews) {
        if (trie.searchPrefix(review)) {
            cout << "🔎 Suspicious match found: " << review << endl;
        }
    }
}
