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

    int mini = v[0]; // initially we give the minimum value
    int mx = 0;

    for(int i=1; i<n; i++)
    {
        int cost = v[i]-mini;
        mx = max(mx,cost);
        mini = min(mini,v[i]);
    }

    cout<<mx<<endl;
    cout<<mx<<endl;
}
