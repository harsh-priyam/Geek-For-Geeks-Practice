 // LinkedList(INSERT AT THE Begin) - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void LinkedList(Node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    } 
}

 Node* InsertBegin(Node* head , int value)
  {
    Node* temp = new Node(value);
    temp->next = head;
    return temp;
  }
 
int main() {
 struct Node* head = new Node(100);
 head->next = new Node(200);
 head->next->next = new Node(300);
 head->next->next->next = new Node(400);
  LinkedList(head); 
  head = InsertBegin(head,23);
  cout<<endl;
  LinkedList(head);
 
return 0;
}