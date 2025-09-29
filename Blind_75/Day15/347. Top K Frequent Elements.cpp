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

    int k;
    cin>>k;

    unordered_map<int,int> um;

    // need to count all of them frequency

    for(int in : v)
    {
        um[in]++;
    }

    // hold it now need to 2D vector it self

    vector<vector<int>> bucket(n+1);

    for(auto it : um)
    {
        int value = it.first;
        int freq = it.second;

        bucket[freq].push_back(value);
    }

    vector<int> res;

    // descending order sorting

    for(int i=bucket.size()-1; i>=0 && res.size()<k; i--)
    {
        for(int val: bucket[i])
        {
            res.push_back(val);

            if(res.size()==k)
            {
                for(int in1 : res)
                {
                    cout<<in1<<endl;
                }
            }
        }
    }

    for(int in : res)
    {
        cout<<in<<endl;
    }
}
