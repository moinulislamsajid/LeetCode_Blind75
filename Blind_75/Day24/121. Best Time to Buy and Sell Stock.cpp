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

    int first = v[0];
    int mx =0;

    for(int i=1; i<n; i++)
    {
        int rest=v[i]-first;
        mx = max(mx,rest);
        first = min(first,v[i]);
    }

    cout<<mx<<'\n';
}
