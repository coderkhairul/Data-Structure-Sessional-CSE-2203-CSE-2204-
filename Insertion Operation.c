/**Insertion Operation**/

#include <stdio.h>

int main()
{
    int arr[20] = {10, 20, 30, 40, 50};
    int i, x, pos, n = 5;

    printf("Array elements before insertion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    x = 99; // element to be inserted
    pos = 3;
    n++;

    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = x;

    printf("Array elements after insertion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
