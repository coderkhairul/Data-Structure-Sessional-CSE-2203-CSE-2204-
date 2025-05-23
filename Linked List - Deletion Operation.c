/**Linked List - Deletion Operation**/

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

// Function to delete a node from the beginning
void deleteatbegin() {
   if(head != NULL) {
      struct node *temp = head;
      head = head->next;
      free(temp);
   }
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

   // Delete the first element
   deleteatbegin();
   printf("\nLinked List after deletion: ");

   // Print the list after deletion
   printList();

   return 0;
}

