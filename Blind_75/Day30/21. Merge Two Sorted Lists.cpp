#include<bits/stdc++.h>
using namespace std;


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{

    ListNode* temp = new ListNode(0);

    ListNode* curr = temp;

    while(l1!=nullptr && l2!=nullptr)
    {
        if(l1->val > l2->val)
        {
            curr->next = l2;
            l2 = l2->next;
        }
        else
        {
            curr->next = l1;
            l1 = l1->next;
        }

        curr = curr->next;
    }

    curr->next = l1 ? l1 : l2;


     ListNode* ans = temp->next;
     delete temp;
     return ans;

}
