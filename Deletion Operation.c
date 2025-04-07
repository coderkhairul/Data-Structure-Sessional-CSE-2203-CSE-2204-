/**Deletion Operation**/

#include <stdio.h>

int main()
{
    int arr[20] = {10, 20, 30, 40, 50, 60};
    int i, pos, n = 6;

    printf("Array elements before deletion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    pos = 4; // position to delete (1-based index)
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array elements after deletion\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
