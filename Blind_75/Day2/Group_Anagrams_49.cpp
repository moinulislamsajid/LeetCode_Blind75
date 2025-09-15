class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> um;

        // using for each loop

        for(string& s : strs)
        {
            string key = s;

            // sort the key value

            sort(key.begin(),key.end());
            um[key].push_back(s); // key always unique

        }

        vector<vector<string>> ans;

        for(auto it : um)
        {
            // just push the value into the vector

            ans.push_back(it.second);
        }


        return ans;
    }
};
