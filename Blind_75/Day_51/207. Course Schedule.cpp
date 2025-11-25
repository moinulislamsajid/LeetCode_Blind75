#include<bits/stdc++.h>
using namespace std;



class Solution
{
public:
    bool canFinish(int nc, vector<vector<int>>& pre)
    {

        vector<vector<int>> adj(nc);
        vector<int> freq(nc,0);

        for(auto & j : pre)
        {
            int a = j[0];
            int b = j[0];

            adj[b].push_back(a);
            freq[a]++;
        }

        // build graph

        queue<int> q;

        for(int i=0; i<nc; i++)
        {
            if(freq[i]==0)
            {
                q.push(i);
            }
        }

        int cnt=0;

        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            cnt++;

            for(int o : adj[u])
            {
                freq[o]--;

                if(freq[o]==0)
                {
                    q.push(o);
                }
            }

        }

        return cnt==nc;
    }
};
