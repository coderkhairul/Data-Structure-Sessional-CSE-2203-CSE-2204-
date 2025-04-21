#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int queue[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;
int peek() {
   return queue[front];
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
void enqueue(int data) {
   if(!isFull()) {
      if(rear == MAX - 1) {
         rear = -1;
      }
      queue[++rear] = data;
      itemCount++;
   }
}
int dequeue() {
   int data = queue[front++];
   if(front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}
int main() {
   enqueue(3);
   enqueue(5);
   enqueue(9);
   enqueue(1);
   enqueue(12);
   enqueue(15);

   printf("Queue size: %d", size());
   printf("\nQueue: ");
   for(int i = 0; i < MAX; i++) {
       printf("%d ", queue[i]);
   }
   if(isFull()) {
      printf("\nQueue is full!");
   }
   int num = dequeue();
   printf("\nElement removed: %d", num);
   printf("\nSize of Queue after deletion: %d", size());
   printf("\nElement at front: %d", peek());
   return 0;
}

/**OUTPUT

Queue size: 6
Queue: 3 5 9 1 12 15
Queue is full!
Element removed: 3
Size of Queue after deletion: 5
Element at front: 5

**/
