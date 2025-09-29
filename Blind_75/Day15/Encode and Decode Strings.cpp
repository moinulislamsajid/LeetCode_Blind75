#include<bits/stdc++.h>
using namespace std;

string decode(vector<string>& strs)
{
    vector<int> sizeOFS;
    string res="";

    for(string& s : strs)
    {
        sizeOFS.push_back(s.size());
    }

    for(int in : sizeOFS)
    {
        res+=to_string(in)+',';
    }

    res+='#';

    for(string& ss : strs)
    {
        res+=ss;
    }

    return res;

}

void encode(string& s)
{
    if(s.empty())
    {
        cout<<"IS empty\n\n";
    }

    vector<string> res;
    vector<int> size_s;

    int i=0;

    while(s[i]!='#')
    {
        string curr="";

        while(s[i]!=',')
        {
            curr+=s[i];
            i++;
        }

        size_s.push_back(stoi(curr));
        i++;
    }

    i++;

    for(int sz : size_s)
    {
        res.push_back(s.substr(i,sz));
        i+=sz;
    }

    for(string & s : res)
    {
        cout<<s<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    vector<string> s(n);

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    string ss = decode(s);
    encode(ss);
}
