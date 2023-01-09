// Searching Inside A LInked_List - By- Harsh Priyam
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

int SearchFunction(Node *head, int value)
{
    Node *curr = head;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == value)
        {
          return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    // Linked_List(head);
    cout<<SearchFunction(head,200);
    return 0;
}