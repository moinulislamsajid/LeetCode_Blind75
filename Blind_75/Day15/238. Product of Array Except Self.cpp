#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }

    vector<int> v(n);

    v[n-1] = 1;
    int p =1;

    for(int i=n-1; i>0; i--)
    {
        p*=nums[i];
        v[i-1] = p;
    }

    p=1;

    for(int i=0; i<n; i++)
    {
        v[i] = p*v[i];
        p*=nums[i];
    }

    for(int in : v)
    {
        cout<<in<<endl;
    }
}
