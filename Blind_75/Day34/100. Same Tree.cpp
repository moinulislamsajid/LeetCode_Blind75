#include<bits/stdc++.h>
using namespace std;


bool isSameTree(TreeNode* p, TreeNode* q)
{
    // if both are null then

    if(p==nullptr && q==nullptr)
    {
        return true;
    }
    else if(p==nullptr || q==nullptr)
    {
        return false;
    }
    else
    {
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }

}
