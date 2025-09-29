#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    if(n==0)
    {
        return 0;
    }
    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int cnt=1,mx = INT_MIN;

    sort(v.begin(),v.end());

    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1])
        {
            if(v[i]==v[i-1]+1)
            {
                cnt++;
            }
            else
            {
                mx = max(mx,cnt);
                cnt=1;
            }
        }
    }

    cout<<max(cnt,mx)<<endl;
}
