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

    vector<vector<int>> res;
    int sum=0;
    if(n<3)
    {
        return n;
    }

    for(int i=0; i<n-2; i++)
    {
        if(i>0 && v[i]==v[i-1])
        {
            continue;
        }

        if(v[i]>0)
        {
            break;
        }

        int l=1,r=n-1;

        while(l<r)
        {
            sum=v[i]+v[l]+v[r];

            if(sum==0)
            {
                res.push_back({v[i],v[l],v[r]});

                while(l<r-1 && v[l]==v[l+1]) l++;
                while(l<r && v[r]==v[r-1]) r--;

                l++;
                r--;



            }
            else if(sum>0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
}
