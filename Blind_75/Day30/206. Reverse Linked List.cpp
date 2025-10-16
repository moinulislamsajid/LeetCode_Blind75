#include<bits/stdc++.h>
using namespace std;


void reverseList(ListNode* &head,ListNode* curr)
{

        // if the traverse at end of the list

        if(curr->next==nullptr)
        {
            head = curr;
            return;
        }

        reverseList(head,curr->next);
        curr->next->next = curr;
        curr->next = nullptr;
}


ListNode* reverseList(ListNode* head)
{

        if(head==nullptr)
        {
            return head;
        }

        reverseList(head,head);
        return head;


}
