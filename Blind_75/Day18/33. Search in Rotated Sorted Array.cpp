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

    int key;
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(v[i]==key)
        {
            cout<<i<<endl;
            return;
        }
    }

    cout<<-1<<endl;
}

int main()
{
    solve();
}
