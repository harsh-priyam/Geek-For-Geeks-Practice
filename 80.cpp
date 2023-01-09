// LinkedList(Inserting at the End) - By- Harsh Priyam
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

Node* InsertAtEnd(Node *head, int value)
{

    Node *flag = new Node(value);

    if (head == NULL)
    {
        return flag;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = flag;
        return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    Linked_List(head);
    cout << endl;
    InsertAtEnd(head, 99);
    Linked_List(head);

    return 0;
}