#include<bits/stdc++.h>
using namespace std;


class Codec
{
public:

    string serialize(TreeNode* root)
    {
        if(!root)
        {
            return "NULL,";
        }

        return to_string(root->val)+','+serialize(root->left)+serialize(root->right);
    }

    TreeNode* deserialize(string data)
    {

        queue<string> q;
        string s;

        for(int i=0; i<data.size(); i++)
        {
            if(data[i]==',')
            {
                q.push(s);
                s="";
                continue;
            }

            s+=data[i];
        }

        // sob gula queue ar modda neya jabo tarpor first ja asba taka aga print korbo sequently

        if(s.size()!=0)
        {
            q.push(s);
        }

        return solve(q);
    }

    TreeNode* solve(queue<string>&q)
    {

        string s = q.front();
        q.pop();

        if(s=="NULL")
        {
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(s));
        N
        root->left = solve(q);
        root->right = solve(q);

        return root;
    }

};
