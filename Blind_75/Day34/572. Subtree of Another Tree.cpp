#include<bits/stdc++.h>
using namespace std;



bool isSame(TreeNode* s,TreeNode* t)
{

    if(!s || !t)
    {
        return s==nullptr && t==nullptr;
    }
    else if(s->val==t->val)

    {
        return isSame(s->left,t->left) && isSame(s->right,t->right);
    }
    else
    {
        return false;
    }
}


