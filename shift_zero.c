//Shift all zeros to the end 

#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    // 'count' keeps track of the position of the next non-zero element to be placed
    int count = 0;

    // Traverse the array. If the current element is non-zero,
    // place it at the position indicated by 'count', and increment 'count'.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // After all non-zero elements are moved, fill the remaining
    // positions from 'count' to the end of the array with zeros.
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

// Helper function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    moveZerosToEnd(arr, n);

    printf("Array after moving zeros: ");
    printArray(arr, n);

    return 0;
}


