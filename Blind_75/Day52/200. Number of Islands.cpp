#include<bits/stdc++.h>
using namespace std;


class Solution
{
    // define visited or unvisited 2 dimensional arrays

    bool vis[305][305];

    vector<pair<int,int>> dir = {{0,1},{0,-1},{1,0},{-1,0}};

    int n,m;
    int ans;

    bool isvalid(int x,int y)
    {
        return x>=0 && x<n && y>=0 && y<m;
    }

    void dfs(int row,int col,vector<vector<char>> & gird)
    {
        gird[row][col] = true;

        for(int i=0; i<4; i++)
        {
            int fir = row + dir[i].first;
            int sec = col + dir[i].second;

            if(isvalid(fir,sec)==true && vis[fir][sec]==false && gird[fir][sec]=='1')
            {

                dfs(fir,sec,gird);
            }
        }
    }

public:


    int numIslands(vector<vector<char>>& grid)
    {
        memset(grid,false,sizeof(grid));
        int n = grid.size();
        int m = grid[0].size();

        ans=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j]=='1')
                {
                    dfs(i,j,grid);
                    ans++;
                }
            }
        }

        return ans;
    }
};
