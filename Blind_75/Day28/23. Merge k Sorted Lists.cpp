#include<bits/stdc++.h>
using namespace std;


// create function to merge them

ListNode* mergeKLists(ListNode* l1,ListNode* l2)
{
    ListNode* ptr1 = l1;
    ListNode* ptr2 = l2;

    // recursive approach

    if(ptr1==nullptr)
    {
        return ptr2;
    }

    if(ptr2==nullptr)
    {
        return ptr1;
    }

    if(ptr1->val > ptr2->val)
    {
        ptr2->next = mergeKLists(ptr1,ptr2->next);
        return ptr1;
    }
    else
    {
        ptr2->next = mergeKLists(ptr1->next,ptr2);
        return ptr2;
    }

}

ListNode* mergeKLists(vector<ListNode*> & lists)
{
        ListNode* ans = nullptr;

        int cnt=0;

        while(cnt<lists.size())
        {
            ans = mergeKLists(ans,lists[cnt]);
            cnt++;
        }

        return ans;
}
