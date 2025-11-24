#include<bits/stdc++.h>
using namespace std;

struct TrieNode
{
    TrieNode* next[26];
    bool lastKyey = false;

    TrieNode(): lastKyey(false)
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

        node->lastKyey=true;
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

                for(j;j<26;j++)
                {
                    if(node->next[ch-'a']) flag |= solve(word.substr(i+1),node->next[j]);
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

        return node->lastKyey;
    }

};


