#include<bits/stdc++.h>
using namespace std;


public:

bool isValidBST(TreeNode* root)
{

    solve(root,LONG_MIN,LONG_MAX);
}

private:

{
    bool solve(TreeNode* root,LONG mn,LONG,mx)
    {

        if(!root)
        {
            return true;
        }
        else if(!(root->val>mn) && (root->val<mx))
        {
            return false;
        }

        return solve(root->left,mn,root->val) && solve(root->right,root->val,mx);
    }

}
