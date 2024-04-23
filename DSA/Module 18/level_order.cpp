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

void level_order(Node* root) 

{
    queue <Node*> q;
    q.push(root); 
    while(!q.empty())
    {
        // queue theke niye ekti room e rekhe test krbo je child ase ki na thkle first e level onujai left e push then right , r child na thkle kichu krbo na

        Node *f = q.front();
        q.pop();

        // jabotiyou kaj kora oi room e niye ba oi single value ta node e niye jabotiyo sob checking kora,printing kora etc
        cout << f->val << " ";
  

        // children gulo ke rakha
        if(f->left)  q.push(f->left);
        if(f->right) q.push(f->right);
    }

}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    //connection

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    level_order(root);

    return 0;
}
