#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    int k;

    cin>>s>>k;

    int l=0,r=0,mx=0,mxfreq=0,n=s.size();
    unordered_map<int,int> um;
    for(r=0;r<n;r++)
    {
        um[s[r]-'A']++;
        mxfreq = max(mxfreq,um[s[r]-'A']);

        //cout<<mxfreq<<endl;

        while(r-l+1-mxfreq>k)
        {
            um[s[l]-'A']--;
            l++;
        }

        mx = max(r-l+1,mx);
    }

    cout<<mx<<endl;
}
