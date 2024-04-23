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
        root == NULL;
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
int sum = 0;
int  noLeafSum(Node* root)
{
     //base case
     
     if(root==NULL)
         return 0;
     if(root->left == NULL && root->right ==NULL) 
     {
         return 0;

     }
    //  if(root->left == NULL || root->right == NULL)
    //  {
    //     if(root->left)
    //         return root->val;
    //     if(root->right)
    //         return root->val;
    //  }
     int l = noLeafSum(root->left);
     int r = noLeafSum(root->right);
     return l + r + root->val;
}


int main()
{
    Node *root = input_tree();
    cout << noLeafSum(root);

    return 0;
}
