#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int k;
    cin>>k;

    unordered_map<int,int> um;

    for(int in : v)
    {
        um[in]++;
    }

    vector<vector<int>> v2d(n+1); // to the last position

    for(auto it : um)
    {
        int value = it.first;
        int freq = it.second;

        v2d[freq].push_back(value);
    }

    vector<int> res;

    for(int i=v2d.size()-1; i>=0 && res.size()<k; i--)
    {

        for(int it : v2d[i])
        {
            res.push_back(it);

            if(res.size()==k)
            {
                return res;
            }
        }
    }

    return res;
}

int main()
{
    solve();
}
