/**Queue Deletion Operation: dequeue())**/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isFull() {
   return itemCount == MAX;
}

bool isEmpty() {
   return itemCount == 0;
}

void insert(int data) {
   if (!isFull()) {
      if (rear == MAX - 1) {
         rear = -1;
      }
      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[front++];
   if (front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}

int main() {
   int i;

   // Insert 6 items
   insert(11);
   insert(22);
   insert(33);
   insert(44);
   insert(55);
   insert(66);

   printf("Queue: ");
   for (i = 0; i < MAX; i++)
      printf("%d ", intArray[i]);

   // Remove one item
   int num = removeData();
   printf("\nElement removed: %d\n", num);

   printf("Updated Queue: ");
   while (!isEmpty()) {
      int n = removeData();
      printf("%d ", n);
   }

   return 0;
}
