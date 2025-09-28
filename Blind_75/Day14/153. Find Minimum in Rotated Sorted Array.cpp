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

    if(v[0]<v[n-1])
    {
        cout<<v[0]<<"\n";
        return;
    }

    int st=0,en=n-1;

    while(st<en)
    {
        int mid = (st+en)/2;

        if(v[mid]>v[en])
        {
            st=mid+1;
        }
        else
        {
            en=mid;
        }


    }
    cout<<v[st]<<"\n";
}

int main()
{
    solve();
}
