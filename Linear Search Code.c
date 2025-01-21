/**Linear Search**/

#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    // Iterate through the array
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i; // Element found, return index
    }
    return -1; // Element not found, return -1
}

int main() {
    int arr[] = {1, 5, 9, 12, 15, 18}; // Array of elements
    int target = 12; // Element to search for
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the linearSearch function
    int result = linearSearch(arr, size, target);

    // Check if the element was found
    if (result != -1)
        printf("Element %d found at index %d\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
