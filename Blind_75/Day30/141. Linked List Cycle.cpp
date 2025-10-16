#include<bits/stdc++.h>
using namespace std;

class ListNode
{
public:

    int val;
    node* next;

    // create a constructor to initial the value

    ListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }

};


bool hasCycle(ListNode *head)
{

    ListNode* fast = head;
    ListNode* slow = head;

    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{

}
