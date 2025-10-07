#include<bits/stdc++.h>
using namespace std;

int longestSequence()
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

    sort(v.begin(),v.end());

    int mx = INT_MIN;
    int cnt=1;
    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1])
        {
            if(v[i]==v[i-1]+1)
            {
                cnt++;
                mx = max(mx,cnt);
            }
        }
    }

    return max(mx,cnt);
}

int main()
{
    cout<<longestSequence()<<endl;
}
