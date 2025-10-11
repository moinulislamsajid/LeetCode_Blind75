#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void insert_at_Last(node* &head,int val)
{
    // create a new node

    node* newNode = new node(val);

    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    node* temp = head;

    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}


void reversePrint(node* &head,node* curr)
{

    if(curr->next==nullptr)
    {
        head=curr;
        return;
    }

    reversePrint(head,curr->next);
    curr->next->next=curr;
    curr->next=nullptr;
}


void printLinkedList(node* head)
{

        node* temp = head;

        while(temp!=nullptr)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }

        cout<<endl<<endl;
}

int main()
{
    node* head = nullptr;

    while(true)
    {
        int val;
        cin>>val;

        if(val==-1)
        {
            break;
        }
        else
        {
            insert_at_Last(head,val);
        }
    }

    reversePrint(head,head);
    printLinkedList(head);
}
