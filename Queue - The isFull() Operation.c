/**Queue - The isFull() Operation**/

#include <stdio.h>
#include <stdbool.h>

#define MAX 6
int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isFull() {
   return itemCount == MAX;
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

int main() {
   int i;

   /* insert 6 items */
   insert(7);
   insert(14);
   insert(21);
   insert(28);
   insert(35);
   insert(42);

   printf("Queue: ");
   for (i = 0; i < MAX; i++)
      printf("%d ", intArray[i]);
   printf("\n");

   if (isFull()) {
      printf("Queue is full!\n");
   }

   return 0;
}
