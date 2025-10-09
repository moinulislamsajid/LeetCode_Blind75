#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    int l=0,r=0,mx=0;

    unordered_set<char> st;

    while(r<s.size())
    {
        if(st.find(s[r])==st.end()) // this means this element has no present
        {
                st.insert(s[r]);
                mx = max(mx,r-l+1);
                r++;
        }
        else
        {
            st.erase(s[l]);
            l++;
        }
    }

    cout<<mx<<'\n';
}


int main()
{
    solve();
}
