/**Queue Complete Implementation**/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}

void insert(int data) {
   if(!isFull()) {
      if(rear == MAX-1) {
         rear = -1;
      }
      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[front++];
   if(front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}

int main() {
   /* insert 6 items */
   insert(7);
   insert(14);
   insert(28);
   insert(35);
   insert(42);
   insert(56);

   printf("Queue size: %d", size());
   printf("\nQueue: ");
   for(int i = 0; i < MAX; i++) {
       printf("%d ", intArray[i]);
   }

   if(isFull()) {
      printf("\nQueue is full!");
   }

   // remove one item
   int num = removeData();
   printf("\nElement removed: %d", num);
   printf("\nSize of Queue after deletion: %d", size());
   printf("\nElement at front: %d", peek());

   return 0;
}
