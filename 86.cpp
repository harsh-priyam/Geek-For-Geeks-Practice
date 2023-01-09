// InsertionInsideTheDoublyLinkedList - By- Harsh Priyam
// Time Complexity --->
// Space Complexity --->
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prvs;
    Node(int x)
    {
        data = x;
        next = NULL;
        prvs = NULL;
    }
};

void Doubly_Linked_List(Node *head)
{
    Node *curr = head;

    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *InsertionFunction(Node *head, int value)
{

    Node *flag = new Node(value);

    flag->next = head;

    if (head != NULL)
    {
        head->prvs = flag;
    }
    return flag;
}

int main()
{

    Node *head = new Node(12);
    Node *body1 = new Node(24);
    Node *body2 = new Node(36);
    Node *body3 = new Node(48);
    Node *body4 = new Node(60);

    head->next = body1;
    body1->prvs = head;

    body1->next = body2;
    body2->prvs = body1;

    body2->next = body3;
    body3->prvs = body2;

    body3->next = body4;
    body4->prvs = body3;

    Doubly_Linked_List(head);
    head = InsertionFunction(head, 45);
    cout << endl;
    Doubly_Linked_List(head);

    return 0;
}