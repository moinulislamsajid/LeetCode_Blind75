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

    int cntO=0,cntT=0;

    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            cntO++;
        }

        if(v[i]==3)
        {
            cntT++;
        }
    }

    cout<<cntO+cntT<<endl;
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
