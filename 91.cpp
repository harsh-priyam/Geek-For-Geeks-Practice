// CircularLinkedLIST - By- Harsh Priyam
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

void CircularLinkedList(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *curr = head->next; curr != head; curr = curr->next)
    {
        cout << curr->data << " ";
    }
}

int main()
{

    Node *head = new Node(100);
    Node *body1 = new Node(101);
    Node *body2 = new Node(102);
    Node *body3 = new Node(103);
    Node *body4 = new Node(104);

    head->next = body1;
    body1->next = body2;
    body2->next = body3;
    body3->next = body4;
    body4->next = head;

    CircularLinkedList(head);

    return 0;
}