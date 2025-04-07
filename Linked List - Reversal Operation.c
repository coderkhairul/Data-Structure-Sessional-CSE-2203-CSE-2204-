/**Linked List - Reversal Operation**/


#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
   int data;
   struct node *next;
};

// Initialize head pointer
struct node *head = NULL;

// Function to display the list
void printList() {
   struct node *p = head;
   printf("\n[");

   // Traverse the list
   while(p != NULL) {
      printf(" %d ", p->data);
      p = p->next;
   }
   printf("]\n");
}

// Function to insert a node at the beginning
void insertatbegin(int data) {
   // Create a new node
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;

   // Point it to the old first node
   lk->next = head;

   // Point head to the new first node
   head = lk;
}

// Function to reverse the linked list
void reverseList(struct node** head) {
   struct node *prev = NULL, *cur = *head, *tmp;
   while(cur != NULL) {
      tmp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = tmp;
   }
   *head = prev;
}

int main() {
   // Insert elements at the beginning
   insertatbegin(60);
   insertatbegin(70);
   insertatbegin(80);
   insertatbegin(90);
   insertatbegin(100);

   printf("Linked List: ");

   // Print the list
   printList();

   // Reverse the linked list
   reverseList(&head);
   printf("\nReversed Linked List: ");

   // Print the reversed list
   printList();

   return 0;
}
