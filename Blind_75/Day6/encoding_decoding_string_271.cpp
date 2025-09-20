class Solution {
public:

    string encode(vector<string>& strs) {

           if(strs.empty())
           {
            return "";
           }

           vector<int> size;
           string res="";

           for(string &s : strs)
           {
              size.push_back(s.size());
           }

           for(int in : size)
           {
              res+=to_string(in)+',';
           }

           res+='#';

           for(string& s : strs)
           {
            res+=s;
           }

           return res;
    }

    vector<string> decode(string s) {

            if(s.empty())
            {
                return {};
            }

            vector<int> size;
            vector<string> res;

            int i=0;

            while(s[i]!='#')
            {
                string cur="";

                while(s[i]!=',')
                {
                    cur+=s[i];
                    i++;
                }

                size.push_back(stoi(cur));
                i++;
            }

            i++;

            for(int in : size)
            {
                res.push_back(s.substr(i,in));
                i+=in;
            }

            return res;
    }
};

