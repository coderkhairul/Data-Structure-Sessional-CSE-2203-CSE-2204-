/**Bubble Short**/

#include <stdio.h>

void bubbleSort(int array[], int size) {
    for(int i = 0; i < size; i++) {
        int swaps = 0;
        for(int j = 0; j < size - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps = 1;
            }
        }
        if(!swaps)
            break;
    }
}

int main() {
    int n;
    n = 5;
    int arr[5] = {55, 12, 78, 23, 34};

    printf("Array before Sorting: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(arr, n);

    printf("Array after Sorting: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
