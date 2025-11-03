#include <stdio.h>

int main() {
    int n, k, i, arr[100], temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (rotation steps): ");
    scanf("%d", &k);

    k = k % n; // if k > n, reduce it

    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];  // store last k elements
    }

    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];  // shift remaining right
    }

    for(i = 0; i < k; i++) {
        arr[i] = temp[i];  // bring stored elements to front
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
