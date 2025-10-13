#include<bits/stdc++.h>
using namespace std;


ListNode* removeNthFromEnd(ListNode* head, int n)
{
    ListNode* temp = new ListNode(0);
    temp->next = head;

    ListNode* fast = temp;
    ListNode* slow = temp;


    for(int i=0; i<=n; i++)
    {
        fast=fast->next;
    }

    while(fast!=nullptr)
    {
        fast=fast->next;
        slow=slow->next;
    }

    ListNode* del = slow->next;
    slow->next = slow->next->next;
    delete del;

    ListNode* ans = temp->next;
    delete temp;
    return ans;
}
