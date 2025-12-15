//find sum of even-index and odd-index elements 

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even_index_sum = 0;
    int odd_index_sum = 0;

    // Loop through the array elements
    for (int i = 0; i < n; i++) {
        // Check if the current index is even
        if (i % 2 == 0) {
            even_index_sum += arr[i]; // Add to even index sum
        } else {
            odd_index_sum += arr[i];  // Add to odd index sum
        }
    }

    // Print the results
    printf("Sum of elements at even indices: %d\\n", even_index_sum);
    printf("Sum of elements at odd indices: %d\\n", odd_index_sum);

    return 0;
}
