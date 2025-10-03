#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int left=0,right=n-1;

    if(v[0]<v[right])
    {

        return v[0];
    }

    while(left<right)
    {
        int mid = (left+right)/2;

        if(v[mid]>v[right])
        {
            left=mid+1;
        }
        else
        {
            right=mid;
        }
    }

    return v[left];
}

int main()
{
    cout<<solve()<<endl;
}
