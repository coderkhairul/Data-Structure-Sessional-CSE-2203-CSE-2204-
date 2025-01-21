/**2D Array Code**/

#include <stdio.h>

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Loop to print the elements of the 2D array
    for (int i = 0; i < 3; i++) { // Loop through rows
        for (int j = 0; j < 4; j++) { // Loop through columns
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
