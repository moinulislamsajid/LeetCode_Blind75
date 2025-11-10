#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:

    int preIndx=0;
    unordered_map<int,int> ump;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
    {

        // all values are hold into ump where key is the inorder value and value is number of i
            for(int i=0; i<inorder.size(); i++)
            {
                ump[inorder[i]]=i;
            }

            // return the method where the tree exactly

            return solve(preorder,0,inorder.size()-1);
    }


private:

    TreeNode* solve(vector<int> &preorder,int st,int en)
    {

        // if any of the list is empty then

        if(st>en)
        {
            return nullptr;
        }

        int rootvalue = preorder[preIndx++];

        TreeNode* root = new TreeNode(rootvalue);

        int mid = ump[rootvalue];

        root->left = solve(preorder,st,mid-1);
        root->right = solve(preorder,mid+1,en);

        return root;
    }

};
