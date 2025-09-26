class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> freq(128,0);

        for(char ch : t)
        {
            freq[ch]++;
        }

        int sT = t.size(),st=0,e=0,d=INT_MAX,h=0;
        while(e<s.size())
        {
            if(freq[s[e++]]-- > 0)
            {
                sT--;
            }

            while(sT==0)
            {
                if(e-st<d)
                {
                    h = st;
                    d = e - h;
                }

                if(freq[s[st++]]++ ==0)
                {
                    sT++;
                }
            }
        }

        return d == INT_MAX ? "" : s.substr(h,d);
    }
};
