#include<bits/stdc++.h>
using namespace std;

bool isSameTree(TreeNode* s,TreeNode* t)
{

    // if both node are empty then

    if(!s || !t)
    {
        return s==nullptr && t==nullptr; // if both are null then return true otherwise false
    }

    else if(s->val==t->val)
    {
        return isSameTree(s->left,t->left) && isSameTree(s->right,t->right);
    }
    else
    {
        return false;
    }
}

bool isSubtree(TreeNode* s, TreeNode* t)
{

        // if by change s is null then

        if(!s)
        {
            return false;
        }
        else if(isSameTree(s,t))
        {
            return true; // if this node has same size sub tree
        }
        else
        {
            // if not found then try another left or right subtree

            return isSameTree(s->left,t) || isSameTree(s->right,t);
        }
}
