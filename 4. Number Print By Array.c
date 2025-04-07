#include <stdio.h>

int main() {

printf("Enter The Number Of Elements: ");
int n;
scanf("%d", &n);
int my_array[n];
printf("Enter %d number:\n", n);
for (int i = 0; i < n; i++) {
    scanf("%d", &my_array[i]);
}
printf("The numbers you entered are:\n");
for (int i = 0; i<n; i++){
    printf("%d\n", my_array[i]);
}
return 0;
}
