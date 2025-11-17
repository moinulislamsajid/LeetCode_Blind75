#include<bits/stdc++.h>
using namespace std;

class WordDictionary
{
public:
    WordDictionary()
    {

    }

    void addWord(string word)
    {
        ump[word.size()].push_back(word);
    }

    bool search(string word)
    {
        for(auto str : ump[word.size()])
        {

            if(isEqual(str,word))
            {
                return true;
            }

        }

        return false;
    }

private:

    unordered_map<int,vector<string> ump;

    bool isEqual(string a,string b)
    {

        for(int i=0; i<a.size(); i++)
        {
            if(b[i]=='.')
            {
                continue;
            }
            if(a[i]!=b[i])
            {
                return false;
            }
        }

        return true;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
