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

void postorder_recursion(Node* root)
{
    //base case
    if(root == NULL)
    {
        return;

    }
    postorder_recursion(root->left);
     cout << root->val << " ";
    postorder_recursion(root->right);
   
}



int main()
{
    Node *root = new Node(50);
    Node *a = new Node(30);
    Node *b = new Node(20);
    Node *c = new Node(80);
    Node *d = new Node(70);
    Node *e = new Node(45);
    Node *f = new Node(60);
    Node *g = new Node(100);
    Node *h = new Node(50);
    Node *i = new Node(90);

    //connection

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->right = g;
    b->left = e;
    b->right = f;
    f->left = h;
    f->right = i;

  postorder_recursion(root);

    return 0;
}
