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

    int l=0,r=n-1;
    int mx = 0;

    while(l<r)
    {
        int hei = min(v[l],v[r]);
        int wei = r-l;

        mx = max(mx,hei*wei);

        if(v[l]<v[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }

    cout<<mx<<endl;
}
