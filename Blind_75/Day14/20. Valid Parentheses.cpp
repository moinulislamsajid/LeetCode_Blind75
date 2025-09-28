#include<bits/stdc++.h>
using namespace std;

bool solve(string s)
{
    stack<char> st; // stack is linear data structure that work as follows as LIFO-> Last in First Out

    for(char i : s)
    {
        if(i=='(' || i=='{' || i=='[')
        {
            st.push(i);
        }
        else
        {

            if(st.empty() || (st.top()=='(' && i!=')') || (st.top()=='{' && i!='}') || (st.top()=='[' && i!=']'))
            {

                return false;
            }else
            {

                st.pop();
            }
        }
    }

    return st.empty();
}

int main()
{
    string s;
    cin>>s;

    cout<<solve(s)<<endl;
}
