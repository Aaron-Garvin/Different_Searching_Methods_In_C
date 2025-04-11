#include <stdio.h>

// Function to find the maximum value in the array
int findMax(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }

    return max;
}

// Function to perform Counting Sort
void countingSort(int arr[], int size) {
    // Step 1: Find the largest element to create count array
    int max = findMax(arr, size);

    // Step 2: Create and initialize count array (like a hash table)
    int count[max + 1];
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Step 3: Count the occurrences of each element in the original array
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Step 4: Rebuild the sorted array using the count array
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    // Define the array to be sorted
    int arr[] = {4, 2, 2, 8, 3, 3, 1};

    // Calculate the number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Call the counting sort function
    countingSort(arr, size);

    // Print the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
