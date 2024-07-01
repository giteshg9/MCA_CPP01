#include <iostream>
using namespacestd;

int node
{
    public:
    int data;
    node* next;
    

    node (int val1)
};

void display(node* head)
{
    node* temp = head;

    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
    
}
int main()
{

}