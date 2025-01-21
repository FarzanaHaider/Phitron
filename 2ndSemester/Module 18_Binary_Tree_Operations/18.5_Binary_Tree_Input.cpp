#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* leftnode,*rightnode;
        if(l==-1) leftnode=NULL;
        else leftnode=new Node(l);
        if(r==-1) rightnode=NULL;
        else rightnode=new Node(r);

        p->left=leftnode;
        p->right=rightnode;
        
        if(p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);
    }
    return root;
}

void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"No Tree."<<endl;
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        cout<<f->val<<" ";
        
        if(f->left!=NULL)
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);
    }
}

int main()
{
    Node *root=input_tree();
    level_order(root);

    return 0;
}