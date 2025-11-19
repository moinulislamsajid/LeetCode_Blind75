#include<bits/stdc++.h>
using namespace std;


struct TrieNode
{
    bool isLastKey;

    TrieNode* next[26];

    TrieNode(): isLastKey(false)
    {
        memset(next,NULL,sizeof(next));
    }

};

class  WordDictionary
{
public:

    WordDictionary()
    {
        root = new TrieNode();
    }

    void addWord(string word)
    {
        TrieNode* node = root;

        for(char ch : word)
        {
            if(!node->next[ch-'a']) node->next[ch-'a'] = new TrieNode();
            node = node->next[ch-'a'];
        }

        node->isLastKey=true;
    }

    bool search(string word)
    {
        return solve(word,root);
    }

private:

    bool solve(string word,TrieNode* node)
    {
        for(int i=0; i<word.size(); i++)
        {
            char ch = word[i];

            if(ch!='.')
            {
                if(!node->next[ch-'a']) return false;
                node = node->next[ch-'a'];
            }
            else
            {
                bool flag = false;

                int j=0;

                for(;j<26;j++)
                {
                    if(node->next[j]) flag |= solve(word.substr(i+1),node->word[j]);
                    if(flag) return true;

                }

                if(j==26) return false;
            }
        }

        return node->isLastKey;
    }

};
