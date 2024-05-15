#include <iostream>
#include <stack>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void preorderIterative(Node* root)
{
    if(root==nullptr)
        return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty())
    {
        Node* curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        if(curr->right)
        s.push(curr->right);
        if(curr->left)
        s.push(curr->left);
        /*right is pushed before left so that the left remains on the top of the stack and is processed first*/
    }
}

void preorderIterativeOptimized(Node *root)
{
    if(root==nullptr)
    return;
    stack<Node*> s;
    s.push(root);
    Node* curr = root;
    while(!s.empty())
    {
        if(curr!=nullptr)
        {
            cout<<curr->data<<" ";
            if(curr->right)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }
        else
        {
            curr = s.top();
            s.pop();
        }
    }
}





int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    cout<<"Preorder traversal of a tree using iterative approach:"<<endl;
    preorderIterative(root);
    cout<<endl;
    cout<<"Optimized Iterative approach:"<<endl;
    preorderIterativeOptimized(root); 
    return 0;
}