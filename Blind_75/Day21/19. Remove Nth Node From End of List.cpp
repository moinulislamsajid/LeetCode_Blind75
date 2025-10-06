#include<bits/stdc++.h>
using namespace std;

class node
{
public:

    int val;
    node* next;

    node(int val)
    {
        this->val=val;
        this->next = nullptr;
    }
};

void insert_at_tail(node* &head,int val)
{

    node* newNode = new node(val);

    if(head==nullptr)
    {
        head=newNode;
        return;
    }

    node* temp = head;

    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }

    temp->next=newNode;
}

void deleteAtAnyPosition(node* head,int pos)
{

    node* temp = head;
    for(int i=pos-1; i>0; i--)
    {
        temp=temp->next;
    }

    temp->next = temp->next->next;

}







void printLinked(node* head)
{
    node* temp = head;

    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
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
            insert_at_tail(head,val);
        }
    }




    int pos;
    cin>>pos;

    deleteAtAnyPosition(head,pos);
    printLinked(head);
}
