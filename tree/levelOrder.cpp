#include <iostream>
#include <queue>
using namespace std;

class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {

    }
};

void printLevelOrder(Node* root)
{
   void levelOrderTravesal(Node*&root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();

        if(temp!=NULL)
            {
            cout<<temp->data<<" ";
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            
            }
        }
    }
}

int calculateNode(Node* &Node)
{
    if(root == NULL) return 0;
    int leftHeight = 0,rightHeight = 0;
    leftHeight += calculateNode(root->left);
    int rightHight
    return max(calculateNode(root->left))
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
}