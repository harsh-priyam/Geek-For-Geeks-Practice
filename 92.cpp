// InsertionAtTheFirstInACircularLinkedList - By- Harsh Priyam
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
    else
    {
        cout << head->data << " ";
        for (Node *p = head->next; p != head; p = p->next)
        {
            cout << p->data << " ";
        }
    }
}

Node *InsertAtFirst(Node *head, int value)
{
    Node *temp = new Node(value);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        int t = head->data;
        head->data = temp->data;
        temp->data = t;

        return head;
    }
}

int main()
{
   Node* head = new Node(11);
   Node* body1 = new Node(22);
   Node* body2 = new Node(33);
   Node* body3 = new Node(44);

   head->next = body1;
   body1->next = body2;
   body2->next = body3;
   body3->next = head;

   CircularLinkedList(head);
   cout<<endl;
   InsertAtFirst(head,55);
   CircularLinkedList(head);
    return 0;
}