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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->next=tail;

    insert_at_tail(head,tail,100);
    insert_at_tail(head,tail,200);
    insert_at_tail(head,tail,300);
    
    print_linked_list(head);
}