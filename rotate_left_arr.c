//Rotate array left by 1

#include <stdio.h>

void rotateLeftByOne(int arr[], int n) {
    if (n <= 1) return; // No rotation needed for 0 or 1 element

    int firstElement = arr[0]; // Store the first element in a temporary variable

    // Shift elements one position to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstElement; // Place the stored element at the end
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateLeftByOne(arr, n);

    printf("\nArray after left rotation by 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


