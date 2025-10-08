#include<bits/stdc++.h>
using namespace std;


TreeNode* invertTree(TreeNode* root)
{
    // base case if root already null or either null then return null

    if(root==nullptr)
    {
        return nullptr;
    }

    // to get the left subtree

    invertTree(root->left);

    // to get the right subtree

    invertTree(root->right);

    swap(root->left,root->right);

    return root;
}
