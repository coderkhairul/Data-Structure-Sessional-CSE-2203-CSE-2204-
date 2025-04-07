/**Queue - The isEmpty() operation**/

#include <stdio.h>
#include <stdbool.h>

#define MAX 6
int intArray[MAX] = {10, 20, 30, 40, 50, 60};
int front = 0;
int rear = -1;
int itemCount = 0;

bool isEmpty() {
   return itemCount == 0;
}

int main() {
   int i;
   printf("Queue: ");
   for(i = 0; i < MAX; i++)
      printf("%d ", intArray[i]);
   printf("\n");
   if(isEmpty()) {
      printf("Queue is Empty!\n");
   } else {
      printf("Queue is not Empty!\n");
   }
   return 0;
}
