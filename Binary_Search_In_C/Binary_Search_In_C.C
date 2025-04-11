#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0;             // Starting index
    int right = size - 1;     // Ending index

    // Loop until the search space is exhausted
    while (left <= right) {
        int mid = (left + right) / 2;  // Find the middle index

        // If target is at mid
        if (arr[mid] == target) {
            return mid;  // Return the index
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // If element is not found
    return -1;
}

int main() {
    // Sorted array
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    
    // Find the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;

    // Ask user to enter the number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Call the binarySearch function
    int result = binarySearch(arr, size, target);

    // Display the result
    if (result != -1) {
        printf("Element found at index %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
