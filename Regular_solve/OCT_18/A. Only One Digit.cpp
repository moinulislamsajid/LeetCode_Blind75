#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;

    vector<int> v;
    for(char ch : s)
    {
        int n = ch-'0';
        v.push_back(n);
    }

    cout<<*min_element(v.begin(),v.end())<<'\n';

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
