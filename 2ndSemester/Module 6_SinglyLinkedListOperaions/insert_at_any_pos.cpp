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

void insert_at_any_pos(Node* &head,int ind, int val)
{
    Node *newnode = new Node(val);
    
    Node* tmp = head;
    for(int i=1;i<ind;i++)
    {
        tmp=tmp->next;
    }

    newnode->next=tmp->next;
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
    Node* head = new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);

    head->next=a;
    a->next=b;

    insert_at_any_pos(head,2,100);
    print_linked_list(head);
}