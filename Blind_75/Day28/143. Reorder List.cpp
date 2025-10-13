#include<bits/stdc++.h>
using namespace std;


void reorderList(ListNode* head)
{

        // create two pointer

        ListNode* slow = head;
        ListNode* fast = head;


        // to get the middle

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        // slow is middle value

        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* node = nullptr;

        while(second!=nullptr)
        {
            ListNode* temp = second->next;
            second->next = node;
            node = second;
            second = temp;
        }

        // merge the value

        ListNode* first = head;
        second=node;

        while(second!=nullptr)
        {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;


            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
}
