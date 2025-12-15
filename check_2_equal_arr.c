//Check if two arrays are equal

#include <stdbool.h>
#include <stdio.h>

bool areArraysEqual(const int arr1[], const int arr2[], int n1, int n2) {
    // First, check if the lengths are the same.
    if (n1 != n2) {
        return false;
    }

    // Compare each element at the same index.
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // Mismatch found
        }
    }

    // If the loop completes, all elements are equal.
    return true;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {1, 2, 3, 4, 6}; // Different

    // Calculate sizes
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int n3 = sizeof(array3) / sizeof(array3[0]);

    if (areArraysEqual(array1, array2, n1, n2)) {
        printf("array1 and array2 are equal.\n");
    } else {
        printf("array1 and array2 are not equal.\n");
    }

    if (areArraysEqual(array1, array3, n1, n3)) {
        printf("array1 and array3 are equal.\n");
    } else {
        printf("array1 and array3 are not equal.\n");
    }

    return 0;
}
