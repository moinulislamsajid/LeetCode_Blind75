#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    unordered_map<Node*,Node*> mp;

    Node* cloneGraph(Node* node)
    {
        // if input node is null then

        if(!node)
        {
            return nullptr;
        }

        if(mp.find(node)==mp.end())
        {
            return mp[node];
        }

        Node* clone = new Node(node->val);
        mp[node] = clone;

        for(auto neigh : node->neighbors)
        {
            clone->neighbors.push_back(cloneGraph(neigh));
        }

        return clone;
    }
};

