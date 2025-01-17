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

void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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
    Node* head = NULL;
    Node* tail = NULL;

    insert_at_head(head,tail,100);
    insert_at_head(head,tail,200);
    print_forward(head);

    return 0;

}