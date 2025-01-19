#include <stdio.h>

int main () {
    int x = 5, y = 10;

    printf("After Swapping: x = %d, y = %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("After Swapping: x = %d, y = %d\n", x, y);
    return 0;
}
