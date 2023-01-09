// Deleting the Last Element in A Linked List-By- Harsh Priyam
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

void Linked_list(Node *head)
{
    while (head != NULL)
    {

        cout << head->data << " ";
        head = head->next;
    }
}

Node *DeleteLast(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }

    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    delete (curr->next);
    curr->next = NULL;
    return head;
}

int main()
{
  Node* head = new Node(12);
  head->next = new Node(24);
  head->next->next = new Node(36);
  head->next->next->next = new Node(48);
  head->next->next->next->next = new Node(60);
  Linked_list(head);
  DeleteLast(head);
  cout<<endl;
  Linked_list(head);
    return 0;
}