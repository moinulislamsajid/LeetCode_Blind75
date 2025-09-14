#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int tg;
    cin>>tg;

    vector<pair<int,int>> ans;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(v[i]+v[j]==tg)
            {
                ans.push_back({i,j});
                break;
            }
        }
    }

    for(auto it : ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
