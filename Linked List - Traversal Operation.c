/**Linked List - Traversal Operation**/

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

int main() {
   // Insert new values at the beginning
   insertatbegin(15);
   insertatbegin(25);
   insertatbegin(35);

   printf("Linked List: ");

   // Print the list
   printList();

   return 0;
}
