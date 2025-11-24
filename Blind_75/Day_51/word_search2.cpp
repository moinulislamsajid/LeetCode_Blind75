#include<bits/stdc++.h>
using namespace std;

class Solution
{

        struct TrieNode
        {
            TrieNode* child[26];
            string word;

            TrieNode(): word("")
            {
                for(int i=0; i<26; i++)
                {
                    child[i] = nullptr;
                }
            }
        };


public:
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
            TrieNode* root = new TrieNode();
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

    TrieNode* buildTree(vector<string>& words)
    {

            TrieNode* root = new TrieNode();

            for(int j=0; j<words.size(); j++)
            {
                string word = words[j];
                TrieNode* curr = root;

                for(int i=0; i<word.length(); i++)
                {
                    char ch = word[i]-'a';

                    if(curr->child[ch]==nullptr) curr->child[ch] = new TrieNode();

                    curr = curr->child[ch];

                }

                curr->word = word;
            }

            return root;

    }


    void dfs(vector<vector<char>> &board,int i,int j,TrieNode* r,vector<string>& result)
    {
        char ch = board[i][j];

        if(ch=='#' || !r->child[ch-'a']) return;

        r = r->child[ch-'1'];

        if(r->word.size()>0)
        {
            result.push_back(r->word);
            r->word="";
        }

        board[i][j]='#';

        if(i>0) dfs(board,i-1,j,r,result);
        if(j>0) dfs(board,i,j-1,r,result);
        if(i<board.size()-1) dfs(board,i+1,j,r,result);
        if(i<board[0].size()-1) dfs(board,i,j+1,r,result);
        board[i][j] = ch;
    }

};
