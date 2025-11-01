#include<bits/stdc++.h>
using namespace std;


int maxDepth(TreeNode* root)
{
     if(root==nullptr)
     {
         return 0;
     }

     int lv = maxDepth(root->left);
     int rv = maxDepth(root->right);

     return max(lv,rv)+1;
}
