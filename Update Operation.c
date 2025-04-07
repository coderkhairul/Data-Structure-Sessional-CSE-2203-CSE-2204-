/**Update Operation**/

#include <stdio.h>

void main() {
    int arr[5] = {18, 30, 15, 70, 12};
    int item = 99, pos = 2;

    printf("Given array elements are :\n");

    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    arr[pos - 1] = item;

    printf("\n\nArray elements after updation :\n");

    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }
}
