#include <stdio.h>

int main() {
    int n, i, key, arr[100], pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        printf("Element not found\n");
        return 0;
    }

    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}
