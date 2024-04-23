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
    int val;
    cin >> val;
    Node *root;
    if(val==-1)
        root = NULL;
        else
            root = new Node(val);
        queue<Node *> q;
 
    if(root)
        q.push(root);
 
        while(!q.empty())
        {

            //1. value niye ekti room e rakha
            Node *p = q.front();  // ekhane p temp variable er moto kaj korche main address ba head root ota amra changr krchi na , p change krchi mane p te new value ene tar child connection complete kore , last e eshe root er sathe  sob connection diye root return kre diyechi  
             q.pop();

            int l, r;
            cin >> l >> r;
            Node *myLeft;
            Node *myRight;

            
            //2. children input niye then val jdi null na hoy tahole new Node create kore room e neya value ba or paren jar children amra input niyechi tar sthe connect kore deya
            if(l==-1)
                myLeft = NULL;
            else
                myLeft = new Node(l);
            if(r==-1)
                myRight = NULL;
                else
                    myRight = new Node(r);
             
                p->left = myLeft;
                p->right = myRight;
            // 3. children gulo jodi children theke thake mane jdi null na hoy tahole queue te push kora
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);

            // ekhn queue te push kora children gulo parent baniye abar tader children input niye connect kore parrent er sthe push kora .. emon vabe jotokhon children sesh na hochhe orthat queue empty na hochhe or value niey amra ukto kaj gulo korbo
        }
        return root;
}

void print_level_order(Node* root) 

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

int count(Node* root)
{
    //base case
    if(root==NULL)
        return 0;

    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;

}

int count_leaf(Node* root)
{
    //base case
    // if(root==NULL)
    if(!root) // ekhane if(root) evabe thkle bujay root null hole negative codition milbe na .. ar if(!root) mane holo root  
       { return 0;}
       //2nd if er condition e else if diye o hochhe
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}

int main()
{

    Node *head = input_tree();
    // print_level_order(head);
    // cout << endl;
    // cout << count(head) << endl;
    cout << count_leaf(head) << endl;

    return 0;
}
