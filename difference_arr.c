//Find the difference between two arrays (element-wise)

#include <stdio.h>

#define SIZE 5

void elementWiseDifference(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; ++i) {
        // Calculate the difference between elements at the same index
        result[i] = arr1[i] - arr2[i];
    }
}

int main() {
    int arr1[SIZE] = {10, 20, 30, 40, 50};
    int arr2[SIZE] = {1, 2, 3, 4, 5};
    int diff_result[SIZE]; // Array to store the differences

    // Calculate the difference
    elementWiseDifference(arr1, arr2, diff_result, SIZE);

    // Print the results
    printf("Array 1: ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", arr2[i]);
    }
    printf("\nDifference (Array 1 - Array 2): ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", diff_result[i]);
    }
    printf("\n");

    return 0;
}
