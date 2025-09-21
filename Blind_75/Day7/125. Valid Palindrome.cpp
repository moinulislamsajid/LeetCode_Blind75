#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;


    string first="";
    string second="";

    for(char ch : s)
    {
        char sch = tolower(ch);
        //cout<<sch<<endl;
        if((sch>='a' && sch<='z'))
        {

            first.push_back(sch);
        }
        else
        {
            int in = sch-48;

            if(in>=0 && in<=9)
            {
                 first.push_back(in);
            }
        }

    }

    //cout<<first<<endl;
    second=first;

    reverse(second.begin(),second.end());

    //cout<<second<<endl;

    if(first==second)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
