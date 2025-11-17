#include<bits/stdc++.h>
using namespace std;


class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
            // to store result now declared two dimensional arrays

            vector<vector<int>> result;

            // to store the current path

            vector<int> currentPath;

            // sort the arrays

            sort(candidates.begin(),candidates.end());


            // called the backtracking method



            backtracking(candidates,0,target,currentPath,result);


            // return the result

            return result;
    }


    void backtracking(vector<int>&candidates,int start,int target,vector<int> & currentPath,vector<vector<int>>&result)
    {
        // if sum are equal for the target value
        if(target==0)
        {
            result.push_back(path);
            return;
        }

        if(target<0)
        {
            return;
        }

        for(int i=start; i<candidates.size(); i++)
        {
            currentPath.push_back(candidates[i]);
            backtracking(candidates,i,target-candidates[i],currentPath,result);
            currentPath.pop_back();
        }
    }
};
