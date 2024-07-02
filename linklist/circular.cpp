#include <iostream>
using namespace std;

void insertAtHead(Node* &head, int val)
{
    Node* n = new Node(val);

    if(head == NULL)
    {
        n -> next = n;
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void display(Node* head)
{
    Node* temp = head;

    while (temp != head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    while (temp != head) 
    {
        cout << "NULL" << endl;
    }
    
}

void deleteAtHead(Node* &head)
{
    Node*
}
int main()
{

}