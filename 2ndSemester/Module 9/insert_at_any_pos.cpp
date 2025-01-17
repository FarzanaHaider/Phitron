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
        Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_any_pos(Node* head,int idx,int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
}

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->prev=head;

    a->next=tail;
    tail->prev=a;

    insert_at_any_pos(head,2,100);
    insert_at_any_pos(head,2,200);

    print_forward(head);

    return 0;

}