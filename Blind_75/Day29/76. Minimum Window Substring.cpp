#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    vector<int> freq(128,0);

    for(char ch : t)
    {
        freq[ch]++;
    }

    int tZ=t.size(),l=0,r=0,bw=INT_MAX,bin=0;

    while(r<s.size())
    {
        if(freq[s[r++]]-- >0)
        {
            tZ--;
        }

        while(tZ==0)
        {
            if(r-l<bw)
            {
                bin=l;
                bw=r-l;
            }

            if(freq[s[l++]]++ ==0)
            {
                tZ++;
            }
        }
    }

    if(bw==INT_MAX)
    {
        cout<<"";
    }
    else
    {
        cout<<s.substr(bin,bw)<<endl;
    }
}
