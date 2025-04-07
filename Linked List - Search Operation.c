/**Linked List - Search Operation**/

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

// Function to search for an element in the list
int searchlist(int key) {
   struct node *temp = head;
   while(temp != NULL) {
      if (temp->data == key) {
         return 1;
      }
      temp = temp->next;
   }
   return 0;
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

   int ele = 85;
   printf("\nElement to be searched is: %d", ele);

   // Search for the element
   int k = searchlist(ele);
   if (k == 1)
      printf("\nElement is found\n");
   else
      printf("\nElement is not found in the list\n");

   return 0;
}
