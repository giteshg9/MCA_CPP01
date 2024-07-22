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

Node* minValue(Node* node)
{
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node* deleteFromBST(Node* root, int val)
{
    if(root == NULL) return root;

    if(root->data == val)
    {
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        int minVal = minValue(root->right)->data;

        root->data = minVal;
        root->right = deleteFromBST(root->right, minVal);
        return root;
    }
    else if(root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
    }
    return root;
}

Node* insertBST(Node* root, int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}

Node* is_key_present(Node* root, int key)
{
    if(root == NULL || root->data == key)
        return root;
    if(root->data < key)
        return is_key_present(root->right, key);
    return is_key_present(root->left, key);
}

int min_element(Node* root)
{
    Node* current = root;
    while(current->left != NULL)
    {
        current = current->left;
    }
    return current->data;
}

int max_element(Node* root)
{
    Node* current = root;
    while(current->right != NULL)
    {
        current = current->right;
    }
    return current->data;
}

int main()
{
    Node* root = NULL;
    root = insertBST(root , 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    
    int key = 10;
    Node* result = is_key_present(root, key);
    if(result != NULL)
    {
        cout << key << " is present in BST." << endl;
    }
    else
    {
        cout << key << " is not present in BST." << endl;
    }

    int min = min_element(root);
    int max = max_element(root);
    cout << "Max element is: " << max << endl;
    cout << "Min element is: " << min << endl;

    return 0;
}
