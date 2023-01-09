// InsertAtTheGivenPositionInsideLinkedList - By- Harsh Priyam
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

Node *InsertAtDesiredPos(Node *head, int pos, int value)
{
    Node *flag = new Node(value);
    Node *curr = head;

    for (int i = 1; i <= pos - 1 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
    {
        return head;
    }

    flag->next = curr->next;
    curr->next = flag;
    return head;
}

int main()
{
  Node* head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head->next->next->next->next->next = new Node(60);
  Linked_List(head);
  InsertAtDesiredPos(head,3,123);
  cout<<endl;
  Linked_List(head);


    return 0;
}