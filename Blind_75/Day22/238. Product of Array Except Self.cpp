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

   /* for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;*/


    vector<int> res(n);


    int p=1;
    res[n-1]=1;

    for(int i=n-1; i>0; i--)
    {
        p*=v[i];
        res[i-1]=p;
    }
    p=1;

    for(int i=0; i<n; i++)
    {
        res[i]=p*res[i];
        p*=v[i];
    }

    for(int in : res)
    {
        cout<<in<<" ";
    }

    cout<<endl;
}

int main()
{
    solve();
}
