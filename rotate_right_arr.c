//rotate array right by 1

#include <stdio.h>

void rotateRightByOne(int arr[], int n) {
    if (n <= 1) return; // No rotation needed for 0 or 1 element

    int lastElement = arr[n - 1]; // Store the last element in a temporary variable

    // Shift elements one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement; // Place the stored element at the beginning
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotateRightByOne(arr, n);

    printf("\nArray after right rotation by 1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
