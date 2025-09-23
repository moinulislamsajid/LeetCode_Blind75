#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.size();

    int i=0,j=0;

    int mxlen=0;

    unordered_set<char> st;

    while(j<n)
    {
        if(st.find(s[j])==st.end())
        {

            st.insert(s(j));
            mx = max(mx,j-i+1)
            j++
        }
        else
        {
            st.erase(s[i]);
            i++;
        }
    }

    cout<<mx<<endl;
}
