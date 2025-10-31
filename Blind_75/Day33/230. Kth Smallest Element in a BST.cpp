#include<bits/stdc++.h>
using namespace std;

void inorder(TreeNode* root,vector<int>&v)
{

    if(root==nullptr)
    {
        return;
    }

    inorder(root->left);
    v.push_back(root->val);
    inorder(root->right);

}

int kthSmallest(TreeNode* root, int k)
{
    vector<int> v;

    // called the method

    inorder(root,v);

    // now return the value

    return v[k-1];
}
