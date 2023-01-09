// ReversingTheLinkedList - By- Harsh Priyam
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

void Double_Linked_List(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void ReverseDoublyLinkedList(Node *head)
{
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
   

    Node *temp = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        temp = curr->prvs;
        curr->prvs = curr->next;
        curr->next = temp;

        curr = curr->prvs;
    }
  
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

    Double_Linked_List(head);
    ReverseDoublyLinkedList(head);
    cout << endl;
    Double_Linked_List(head);
    return 0;
}