#include<bits/stdc++.h>
using namespace std;


void reorderList(ListNode* head)
{

    // need at find the mid value

    // need to traverse

    ListNode* slow = head;
    ListNode* fast = head;


    while(fast!=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // now slow is mid value of this list

    // now need to reverse

    ListNode* second = slow->next;
    slow->next = nullptr;
    ListNode* node = nullptr;


    // now traverse the list where need rest of the list need reverse after the mid part

    while(second!=nullptr)
    {
        ListNode* temp = second->next;
        second->next = node;
        node = second;
        second = temp;
    }


    // now merge the list

    ListNode* first = head;
    second = head;

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
