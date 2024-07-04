#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    node* next;

    node(int val1) :
};

middleNod(Node* head)
{
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << endl << slow -> data;
}
int main()
{

}