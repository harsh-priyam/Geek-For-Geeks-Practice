 // Doubly-LinkedLIst - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
using namespace std;
 
 struct Node
 {
     int data;
     Node* next;
     Node* prvs;
     Node(int x)
     {
         data = x;
         next = NULL;
         prvs = NULL;
     }
 };
 
 void Doubly_Linked_list(Node* head )
 {
     Node* curr = head;
     while (curr != NULL)
     {
         cout<<curr->data<<" ";
         curr = curr->next;
     }
 }

 
int main() {

Node* head = new Node(2);
Node* body1 = new Node(4);
Node* body2 = new Node(6);
Node* body3 = new Node(7);
Node* body4 = new Node(12);


head->next = body1;
body1->prvs = head;

body1->next = body2;
body2->prvs = body1;

body2->next = body3;
body3->prvs = body2;

body3->next = body4;
body4->prvs = body3;

Doubly_Linked_list(head);

 
return 0;
}