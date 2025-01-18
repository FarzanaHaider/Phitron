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

void insert_at_tail(Node* &head,int val)
{
    Node *newnode = new Node(val);
    
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
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

    insert_at_tail(head,100);
    insert_at_tail(head,200);
    insert_at_tail(head,300);
    
    print_linked_list(head);
}