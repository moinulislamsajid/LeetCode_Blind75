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

    int tg;
    cin>>tg; // target is value

    for(int i=0; i<n; i++)

    {
        if(v[i]==tg)
        {
            cout<<i<<"\n";
            break;
        }
    }
}
