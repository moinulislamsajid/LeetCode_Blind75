#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int k;
    cin>>k;

    int l=0,r=0,mx=0,mxfreq=0,n=s.size();

    unordered_map<int,int> um;

    for(r=0; r<n; r++)
    {
        um[s[r-'A']]++;
        mxfreq = max(mxfreq,um[s[r-'A']]);

        while(r-l+1-mxfreq>k)
        {
            um[s[r-'A']]--;
            l++;
        }

        mx = max(mx,r-l+1);
    }

    cout<<mx<<'\n';
}


int main()
{
    solve();
}
