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

class myQueue 
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)                   //O(1)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;
    }
    void pop()                          //O(1)
    {
        sz--;
        Node* deleteNode = head;
        head=head->next;
        delete deleteNode;

        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()                   //O(1)
    {
        return head->val;
    }
    int back()                    //O(1)
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head==NULL;
    }
};

int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    // cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}