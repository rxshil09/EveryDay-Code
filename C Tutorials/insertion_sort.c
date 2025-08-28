#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        for (; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }

        // Place the key at its correct position in the sorted array
        arr[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
