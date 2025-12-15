//Find prefix sum array

#include <stdio.h>

void computePrefixSum(int arr[], int n, int prefixSum[]) {
    // The first element of the prefix sum array is the same as the first element of the original array
    prefixSum[0] = arr[0];

    // Iterate from the second element to the end of the array
    for (int i = 1; i < n; i++) {
        // The current prefix sum is the current element plus the previous prefix sum
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

int main() {
    int arr[] = {10, 20, 10, 5, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Declare an array of the same size to store the prefix sums
    int prefixSum[n];

    computePrefixSum(arr, n, prefixSum);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPrefix sum array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", prefixSum[i]);
    }

    return 0;
}
