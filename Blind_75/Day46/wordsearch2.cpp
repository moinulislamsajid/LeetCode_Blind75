#include<bits/stdc++.h>
using namespace std;

class Solution
{
    struct TrieNode
    {
        TrieNode* children[26];
        string word;


        TrieNode() : word(" ")
        {
            for(int i=0; i<26; i++)
            {
                children[i]=nullptr;
            }
        }

    };

    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {

        TrieNode* root = buildTrie(words);

        // create a vector for initialize with the result

        vector<string> result;

        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                dfs(board,i,j,root,result);
            }
        }

        return result;
    }
    TrieNode *buildTrie(vector<string> &words)
    {
        TrieNode *root = new TrieNode();

        for(int j=0; j<words.size(); j++)
        {

            string world = words[j];
            TrieNode* curr = root;

            for(int i=0; i<world.size(); i++)
            {
                char c = world[i]-'a';

                if(curr->children[c]==nullptr)
                {
                    curr->children[c] = new TrieNode();
                }
                curr = curr->children[c];
            }

            curr->world = world;
        }

        return root;
    }

    void dfs(vector<vector<char>> &board, int i, int j, TrieNode *p, vector<string> &result)
    {


        char c = board[i][j];

        if(c=='#' || !p->children[c-'a'])
        {
            return;
        }

        p = p->children[c-'a'];


        if(p->word.size()>0)
        {
            result.push_back(p->word);
            p->word="";
        }

        board[i][j]='#';
        if (i > 0) dfs(board, i - 1, j, p, result);
        if (j > 0) dfs(board, i, j - 1, p, result);
        if (i < board.size() - 1) dfs(board, i + 1, j, p, result);
        if (j < board[0].size() - 1) dfs(board, i, j + 1, p, result);
        board[i][j] = c;

    }
};
