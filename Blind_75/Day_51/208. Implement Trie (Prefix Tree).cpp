#include<bits/stdc++.h>
using namespace std;


class TrieNode
{
public:

    TrieNode* child[26];
    bool isLast;

    TrieNode()
    {
        isLast=false;

        for(auto &a : child)
        {
            a = nullptr;
        }
    }
};

class Trie
{
public:

    TrieNode* root;
    Trie()
    {
        root = new TrieNode();

    }

    void insert(string s)
    {

        TrieNode* node = root;

        for(char ch : s)
        {
            if(!node->child[ch-'a']) node->child[ch-'a'] = new TrieNode();
            node = node->child[ch-'a'];
        }

        node->isLast=true;
    }

    bool search(string s, bool prefix=false)
    {

        TrieNode* node = root;

        for(char ch : s)
        {
            if(!node->child[ch-'a']) return false;

            node = node->child[ch-'a'];
        }

        if(prefix==false) return node->isLast;
        return true;

    }

    bool startsWith(string prefix)
    {
        return search(prefix,true);

    }
};
