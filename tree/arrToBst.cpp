Node* sortedArrayToBST(int arr[], int s, int e)
{
    if(s > e) return NULL;
    int mid = (s+e)/2;

    Node* root = new Node(arr[mid]);
    root->left = sortedArrayToBST(arr,s,mid-1);
    root->right = sortedArrayToBST(arr, mid + 1,e);

    return root;
}

int main()
{
    
}