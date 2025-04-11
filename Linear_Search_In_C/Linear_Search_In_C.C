#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int size, int target) {
    // Go through each element of the array
    for (int i = 0; i < size; i++) {
        // If the current element matches the target
        if (arr[i] == target) {
            return i; // Return the index where it's found
        }
    }

    // If the element is not found, return -1
    return -1;
}

int main() {
    // Define an array with some values
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Variable to hold the number to be searched
    int target;

    // Ask the user to enter the number to search
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // Call the linearSearch function
    int result = linearSearch(arr, size, target);

    // Display the result
    if (result != -1) {
        printf("Element found at index %d.\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
