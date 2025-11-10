#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidBST(TreeNode* root)
    {

            // return korbo function tah

            // initial er amara long min and long max pass kora deabo
            return solve(root,LONG_MIN,LONG_MAX);

    }
private:

    bool solve(TreeNode* root,LONG mn,Long mx)
    {
        // if already root is null then return null

        if(!root)
        {
            return true;
        }
        else if(!(root->val > mn && root->val < mx))
        {
            return false;
        }
        else
        {
            return solve(root->left,mn,root->val) && solve(root->right,root->val,mx);
        }
    }

};

