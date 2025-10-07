#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    vector<int> freq(128,0);
    int ts=0,st=0,en=0,be=INT_MAX,bi=0;

    for(char ch : t)
    {
        freq[ch]++;
    }

    while(en<s.size())
    {

        if(freq[s[en++]]-- >0)
        {
            ts--;
        }

        while(ts==0)
        {
            if(en-st<be)
            {
                bi=st;
                be=en-st;
            }

            if(freq[s[st++]]++ ==0)
            {
                ts++;
            }
        }
    }

    if(be==INT_MAX)
    {
        cout<<"Duck\n";
    }
    else
    {
        cout<<s.substr(bi,be)<<endl;
    }
}
