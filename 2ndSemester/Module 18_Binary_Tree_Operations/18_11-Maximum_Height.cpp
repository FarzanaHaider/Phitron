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

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int max_height(Node *root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
}

int main()
{
    Node* root = input_tree();
    cout<<max_height(root);
    return 0;
}