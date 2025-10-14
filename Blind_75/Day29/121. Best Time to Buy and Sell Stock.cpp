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

    int init = v[0];
    int mx =0;

    for(int i=0; i<n; i++)
    {
        int dis = v[i]-init;
        mx = max(mx,dis);
        init = min(init,v[i]);
    }

    cout<<mx<<'\n';
}
