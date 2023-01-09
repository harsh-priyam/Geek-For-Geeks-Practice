// DeletingTheFirstNodeInLinkedList - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void Linked_List(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *DeleteFirstNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
else{
    Node *temp = head->next;
    delete (head);
    return temp;}
}

int main()
{
   Node *head = new Node(100);
   head->next = new Node(200);
   head->next->next = new Node(300);
   head->next->next->next = new Node(400);
   Linked_List(head);
   head = DeleteFirstNode(head);
   cout<<endl;
   Linked_List(head);
    return 0;
}