#include <stdio.h>

// Function to rotate the array to the right by 'positions'
void rotateRight(int *arr, int size, int positions) {
    // Normalize positions if it's greater than the size of the array
    positions = positions % size;

    // Temporary array to hold the elements that will be rotated
    int temp[positions];

    // Store the last 'positions' elements in temp
    for (int i = 0; i < positions; i++) {
        temp[i] = arr[size - positions + i];
    }

    // Shift the rest of the array to the right
    for (int i = size - 1; i >= positions; i--) {
        arr[i] = arr[i - positions];
    }

    // Copy the elements from temp to the beginning of the array
    for (int i = 0; i < positions; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size, positions;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate the array
    printf("Enter the number of positions to rotate to the right: ");
    scanf("%d", &positions);

    // Print the array before rotation
    printf("Before rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rotate the array to the right
    rotateRight(arr, size, positions);

    // Print the array after rotation
    printf("After rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}