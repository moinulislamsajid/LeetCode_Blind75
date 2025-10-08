#include<bits/stdc++.h>
using namespace std;

bool isSame(TreeNode* s, TreeNode* t)
{

    // check if any of them are null then simply set null

    if(!s || !t)
    {
        return s==nullptr && t==nullptr;
    }
    // if value are equal

    else if(s->val == t->val)
    {
        return isSame(s->left,t->left) && isSame(s->right,t->right);
    }
    else
    {
        return false;
    }


}

bool isSubtree(TreeNode* s, TreeNode* t)
{
    // is main s is already is null then

    if(!s)
    {
        return false;
    }

    else if(isSame(s,t))
    {
        return true;
    }
    else
    {
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
}
