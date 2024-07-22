#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* searchBST(Node* root, int key)
{
    if(root == NULL) return NULL;

    if(root->data == key) return root;

    if(root->data > key) return searchBST(root->left, key);

    return searchBST(root->right, key);
}

int main()
{
    Node* root = NULL;
    root = searchBST(root,5);
    searchBST(root,1);
    searchBST(root,3);
    searchBST(root,4);
    searchBST(root,2);
    searchBST(root,7);
    int key = 10;
    Node* result !=
}