#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *left;
        Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    queue<Node *> q;
    int val;
    Node *root;
    cin >> val;
    if(val==-1)
        root = NULL;
    else
        root = new Node(val);
    q.push(root);
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if(l==-1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if(r==-1)
            myRight = NULL;
        else
            myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
    return root;
}

int leaf(Node* root,vector<int> &v)
{
    if(root==NULL)
        return 0 ;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
        return 0 ;
    }
    else
   { int l = leaf(root->left,v);
    int r = leaf(root->right,v);
    return 0;}
}


int main()
{
    vector<int> v;

    Node *root = input_tree();
    leaf(root,v);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

        return 0;
}
