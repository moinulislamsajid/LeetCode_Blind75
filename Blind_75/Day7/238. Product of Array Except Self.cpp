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

    int p=1;
    vector<int> ans(n);

    ans[n-1] = 1;

    for(int i=n-1; i>0; i--)
    {

        p*=v[i];
        ans[i-1] = p;
    }

    p=1;

    for(int i=0; i<n; i++)
    {
        ans[i] = ans[i]*p;
        p*=v[i];
    }

    for(int i=0; i<n; i++)
    {
         cout<<ans[i]<<endl;
    }
}
