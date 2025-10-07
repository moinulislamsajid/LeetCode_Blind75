#include<bits/stdc++.h>
using namespace std;

void encodeing(vector<string> &strs)
{
    vector<int> sz;
    string res="";

    for(string& sh : strs)
    {
        sz.push_back(sh.size());
    }

    for(int in : sz)
    {
        res+=to_string(in)+',';
    }

    res+='#';

    for(string& s : strs)
    {
        res+=s;
    }

    cout<<res<<endl;
}

int main()
{
    int n;
    cin>>n;

    vector<string> strings(n);

    for(int i=0; i<n; i++)
    {
        cin>>strings[i];
    }

    encodeing(strings);
}
