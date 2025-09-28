#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    /*for(string s : v)
    {
        cout<<s<<endl;
    }*/

    // now using unordered_map


    unordered_map<string,vector<string>> um;

    for(string& s : v)
    {
        string key = s;

        sort(key.begin(),key.end());
        um[key].push_back(s); // we know that unordered
    }

    vector<vector<string>> res;

    for(auto in : um)
    {
        res.push_back(in.second);
    }


    // using nested loop

    for(auto& group : res)
    {
        for(auto& word : group)
        {
            cout<<word<<endl;
        }
    }
}
