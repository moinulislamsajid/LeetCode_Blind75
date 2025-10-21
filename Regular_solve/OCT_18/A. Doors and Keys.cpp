#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int r=0,b=0,g=0,R=0,B=0,G=0;

    if(s[0]=='R' || s[0]=='B' || s[0]=='G')
    {
        cout<<"NO\n";
        return;
    }

    int n=s.size();
    //cout<<s[n-1]<<endl;

    if(s[n-1]=='r' || s[n-1]=='b' || s[n-1]=='g')
    {
        cout<<"NO\n";
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(s[i]=='r')
        {
            r=i;
        }
        else if(s[i]=='b')
        {
            b=i;
        }
        else if(s[i]=='g')
        {
            g=i;
        }
        else if(s[i]=='G')
        {
            G=i;
        }
        else if(s[i]=='B')
        {
            B=i;
        }
        else
        {
            R=i;
        }
    }

    if((r<R && b<B) && g<G)
    {
        cout<<"YES\n";
    }
    else
    {
         cout<<"NO\n";

    }
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
