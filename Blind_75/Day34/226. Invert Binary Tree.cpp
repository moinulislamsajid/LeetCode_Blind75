#include<bits/stdc++.h>
using namespace std;

TreeNode* invertTree(TreeNode* root)
{
    invertTree(root->left);
    invertTree(root->right);
    swap(root->left,root->right);
    return root;
}
