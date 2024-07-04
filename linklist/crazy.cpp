#include <iostream>
using namespace std;

Node* floydDetectLoop(Node*)
{
    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (slow!=NULL && fast != NULL)
    {
        slow = slow -> next;
        if(fast->next != NULL) fast = fast->next->next;

        if(slow == fast) return slow;
    }
    return NULL; 
     
}

void removeLoop(Node* head)
{
    if(head == NULL) return;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while (temp->next!=startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;

}

int main(0)
{

}