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

    int last = v[n-1];
    //cout<<last<<endl;
    int res=0,mx=0;

    for(int i=0; i<n-1; i++)
    {
        if(v[i]>=last)
        {
            res=last*last;
            cout<<res<<endl;
        }

        mx = max(res,mx);
        cout<<mx<<endl;
    }

    cout<<mx<<endl;
}
