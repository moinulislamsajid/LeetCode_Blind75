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

   /* int mn = *min_element(v.begin(),v.end());

    if(v[n-1]==mn)
    {
        cout<<0<<endl;
        return 0;
    }
    */
    /*int mnindx=-1,mxindx=-1;

    int mnL = INT_MAX;
    int mx = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(v[i]<mnL)
        {
            mnL=v[i];
            mnindx=i;
        }
    }

    //cout<<mnindx<<endl;

    for(int i=mnindx+1; i<n; i++)
    {
        //cout<<"CHECK IT!";
        if(v[i]>mx)
        {
            //cout<<"CHECK IT!";
            mx=v[i];
            mxindx=i;
        }


    }

    //cout<<mxindx<<endl;

    //cout<<v[mxindx]<<endl;

    if(mnindx==n-1)
    {
        cout<<0<<endl;
        return 0;
    }

    cout<<v[mxindx]-v[mnindx]<<endl;*/


    // now new approach has arrived

    int mini = v[0];
    int mxProfit = 0;

    for(int i=1; i<n; i++)
    {
        int cost = v[i]-mini;
        mxProfit = max(mxProfit,cost);
        mini = min(mini,v[i]);

    }

    cout<<mxProfit<<"\n";
}
