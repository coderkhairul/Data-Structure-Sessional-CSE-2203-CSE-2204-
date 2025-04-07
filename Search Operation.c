/**Search Operation**/

#include <stdio.h>

void main() {
    int arr[5] = {5, 10, 15, 20, 25};
    int item = 20, i = 0;

    printf("Given array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d,  ", i, arr[i]);
    }

    printf("\nElement to be searched = %d\n", item);

    i = 0;
    while (i < 5) {
        if (arr[i] == item) {
            break;
        }
        i++;
    }

    printf("\nElement %d is found at %d position\n", item, i + 1);
}
