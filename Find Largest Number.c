#include <stdio.h>

int main () {

int a, b, c, largest;
printf("Enter Three Number: ");
scanf("%d%d%d", &a, &b, &c);
if (a>b && a>c){
    largest = a;
}
else if (b>c){
    largest = b;
}
else{
    largest = c;
}
printf("The Largest Number Is: %d\n", largest);
return 0;
}
