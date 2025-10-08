#include<bits/stdc++.h>
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q)
{
    // recursive approach

    // if two node has been null then are equal

    if(p==nullptr && q==nullptr)
    {

        return true;
    }

    if(p==nullptr || q==nullptr)
    {
        return false;
    }

    if(p->val == q->val)
    {
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }

    return false;
}
