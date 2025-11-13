#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    bool exist(vector<vector<char>>& board, string word)
    {
            // to find the total number row and column

            int m = board.size(); // total number of rows
            int n = board[0].size(); // total number of column

            // create lemdha function

            function<bool(int,int,int)> backtark = [&](int i,int j,int k)
            {
                if(k==word.length())
                {
                    return true;
                }

                if(i<0 || i>=m || j<0|| j>=n || board[i][j]!=word[k])
                {
                    return false;
                }

                char temp = word[i][j];
                word[i][j]='\0';


                if(backtark(i+1,j,k+1) || backtark(i-1,j,k+1) || backtark(i,j+1,k+1) || backtark(i,j-1,k+1))
                {
                    return true;
                }

                board[i][j] = temp;
                return false;
            };


            for(int i=0; i<m; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(backtrack(i,j,0))
                    {

                        return true;
                    }
                }
            }

            return false;
    }
};
