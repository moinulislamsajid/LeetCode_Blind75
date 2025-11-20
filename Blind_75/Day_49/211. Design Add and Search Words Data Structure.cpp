#include<bits/stdc++.h>
using namespace std;


class WordDictionary
{

    struct TrieNode
    {
        TrieNode* next[26];
        bool isLastNode;

        TrieNode() : isLastNode(false)
        {
            memset(next,NULL,sizeof(next));
        }
    };
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

            node->isLastNode=true;
    }

    bool search(string word)
    {
        return solve(word,root);
    }


private:

    TrieNode* root;

    bool solve(string word,TrieNode* node)
    {

        for(int i=0; i<word.size(); i++)
        {
            char c = word[i];

            if(c!='.')
            {
                if(!node->next[c-'a']) return false;
                node = node->next[c-'a'];
            }
            else
            {
                bool flag=false;

                int j=0;
                for(;j<26;j++)
                {
                    if(node->next[j]) flag |= solve(word.substr(i+1),node->next[j]);
                    if(flag)
                    {
                        return true;
                    }
                }

                if(j==26)
                {
                    return false;
                }
            }
        }

        return node->isLastNode;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
