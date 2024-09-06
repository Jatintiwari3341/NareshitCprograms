#include <stdio.h>

// Function to calculate the sum of the array elements
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    
    // Take input for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    
    // Take input for the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and display the sum
    int sum = sumOfArray(arr, size);
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
