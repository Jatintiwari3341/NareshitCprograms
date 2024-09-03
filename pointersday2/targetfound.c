#include <stdio.h>
int find_index(int arr[], int n, int K) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == K)
            return i;
        else if (arr[i] > K)
            return i;
    }
    return n;
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int K;
    printf("Enter the target element: ");
    scanf("%d", &K);
    printf("%d\n", find_index(arr, n, K));

    return 0;
}
