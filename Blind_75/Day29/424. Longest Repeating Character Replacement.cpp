#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int k;
    cin>>k;

    unordered_map<int,int> ump;
    int r=0,l=0,maxfreq=0,mx=0;

    for(r=0; r<s.size(); r++)
    {
        ump[s[r]-'A']++;

        maxfreq = max(maxfreq,ump[s[r]-'A']);

        while(r-l+1-maxfreq>k)
        {
            ump[s[l]-'A']--;
            l++;
        }

        mx = max(mx,r-l+1);
    }

    cout<<mx<<endl;
}
