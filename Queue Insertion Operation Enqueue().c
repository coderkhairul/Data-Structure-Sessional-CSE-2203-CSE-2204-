/**Queue Insertion Operation: Enqueue()**/

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

bool isEmpty() {
   return itemCount == 0;
}

int removeData() {
   int data = intArray[front++];
   if (front == MAX) {
      front = 0;
   }
   itemCount--;
   return data;
}

void insert(int data) {
   if (!isFull()) {
      if (rear == MAX - 1) {
         rear = -1;
      }
      intArray[++rear] = data;
      itemCount++;
   } else {
      printf("Queue is full. Cannot insert %d\n", data);
   }
}

int main() {
   insert(7);
   insert(14);
   insert(21);
   insert(28);
   insert(35);
   insert(42);

   printf("Queue: ");
   while (!isEmpty()) {
      int n = removeData();
      printf("%d ", n);
   }
   printf("\n");

   return 0;
}

