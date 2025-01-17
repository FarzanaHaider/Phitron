#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node *newnode = new Node(val);
    
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }

    tail->next=newnode;
    tail=tail->next;
}

void sort_linked_list(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    
    sort_linked_list(head);
    print_linked_list(head);
}